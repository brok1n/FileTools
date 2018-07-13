using System;
using System.IO;
using System.Text.RegularExpressions;
using System.Threading;
using System.Windows.Forms;

namespace 日志处理工具
{
    public partial class Form1 : Form
    {

        private SynchronizationContext _context;
        private Regex reg;

        public Form1()
        {
            InitializeComponent();
            _context = SynchronizationContext.Current;
            toolStripProgressBar1.Maximum = 100;
            toolStripProgressBar1.Minimum = 0;
            toolStripProgressBar1.Value = 0;
            toolStripProgressBar1.Step = 1;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            OpenFileDialog openFileDialog = new OpenFileDialog();
            openFileDialog.Multiselect = false;
            openFileDialog.Title = "请选择文件";
            openFileDialog.Filter = "所有文件(*.*)|*.*";
            if (openFileDialog.ShowDialog() == DialogResult.OK) {
                filePathEdt.Text = openFileDialog.FileName;
            }

            filePathEdt.Focus();
            button1.Focus();
            toolStripProgressBar1.Value = 0;
        }

        private void filePathEdt_Leave(object sender, EventArgs e)
        {
            String filePath = filePathEdt.Text;

            if (filePath.Length <= 0 ) {
                return;
            }


            FileInfo file = new FileInfo(filePath);

            if (!file.Exists) {
                MessageBox.Show("文件不存在！ 请输入或选择存在的文件");
                return;
            }

            long fileSize = file.Length;

            long fileMbSize = fileSize / 1024 / 1024;

            long defaultSplitCount = fileMbSize / 300;

            splitCntEdt.Text = "" + defaultSplitCount;

            Console.WriteLine("文件大小:" + fileSize); 

        }

        private void button2_Click(object sender, EventArgs e)
        {
            //文件路径
            String filePath = filePathEdt.Text;
            if (filePath.Trim().Length <= 1) {
                MessageBox.Show("请选择文件！");
                return;
            }

            //要包含字符串
            String str = containsStrEdt.Text;

            if (str.Length <= 0)
            {
                MessageBox.Show("包含字符串不能为空!");
                return;
            }

            //正则
            Boolean isReg = containsRegCbox.Checked;
            if (isReg)
            {
                reg = new Regex(str);
            }


            FileInfo file = new FileInfo(filePath);
            String dir = file.DirectoryName;
            Console.WriteLine(dir);
            String name = file.Name;
            Console.WriteLine(name);
            String fullName = file.FullName;
            Console.WriteLine(fullName);
            String ext = file.Extension;
            Console.WriteLine(ext);

            if (!file.Exists) {
                MessageBox.Show("文件不存在!请确保要处理的文件存在,或重新选择文件。");
                return;
            }

            //输出文件路径
            String outPath = dir + "\\" + name.Substring( 0, name.Length - ext.Length) + "_包含字符串_" + GetTimeStamp() + "" + ext;

            StreamReader reader = new StreamReader(filePath);
            StreamWriter writer = new StreamWriter(outPath);
           

            String line = null;
            while ( ( line = reader.ReadLine()) != null ) {
                if ( isReg && reg != null ) {
                    if (reg.IsMatch(line))
                    {
                        writer.WriteLine(line);
                    }
                } else if (line.Contains(str)) {
                    writer.WriteLine(line);
                }
            }

            reader.Close();
            writer.Close();

            MessageBox.Show("处理完成!");

        }

        private void button3_Click(object sender, EventArgs e)
        {
            //文件路径
            String filePath = filePathEdt.Text;
            if (filePath.Trim().Length <= 1)
            {
                MessageBox.Show("请选择文件！");
                return;
            }

            //不包含字符串
            String str = noContainsStrEdt.Text;

            if (str.Length <= 0)
            {
                MessageBox.Show("不包含字符串不能为空!");
                return;
            }

            //正则
            Boolean isReg = notContainsRegCbox.Checked;
            if (isReg)
            {
                reg = new Regex(str);
            }

            FileInfo file = new FileInfo(filePath);
            String dir = file.DirectoryName;
            Console.WriteLine(dir);
            String name = file.Name;
            Console.WriteLine(name);
            String fullName = file.FullName;
            Console.WriteLine(fullName);
            String ext = file.Extension;
            Console.WriteLine(ext);

            if (!file.Exists)
            {
                MessageBox.Show("文件不存在!请确保要处理的文件存在,或重新选择文件。");
                return;
            }

            //输出文件路径
            String outPath = dir + "\\" + name.Substring(0, name.Length - ext.Length) + "_不包含字符串_" + GetTimeStamp() + "" + ext;

            StreamReader reader = new StreamReader(filePath);
            StreamWriter writer = new StreamWriter(outPath);

            String line = null;
            while ((line = reader.ReadLine()) != null)
            {
                if (isReg && reg != null )
                {
                    if (reg.IsMatch(line))
                    {
                        writer.WriteLine(line);
                    }
                } else if (!line.Contains(str))
                {
                    writer.WriteLine(line);
                }
            }

            reader.Close();
            writer.Close();

            MessageBox.Show("处理完成!");
        }

        private void button4_Click(object sender, EventArgs e)
        {
            //文件路径
            String filePath = filePathEdt.Text;
            if (filePath.Trim().Length <= 1)
            {
                MessageBox.Show("请选择文件！");
                return;
            }

            //保存之前分割字符串
            String str = beforeStrEdt.Text;

            if (str.Length <= 0)
            {
                MessageBox.Show("之前字符串不能为空!");
                return;
            }

            //正则
            Boolean isReg = beforeRegCbox.Checked;
            if (isReg)
            {
                reg = new Regex(str);
            }
            

            FileInfo file = new FileInfo(filePath);
            String dir = file.DirectoryName;
            Console.WriteLine(dir);
            String name = file.Name;
            Console.WriteLine(name);
            String fullName = file.FullName;
            Console.WriteLine(fullName);
            String ext = file.Extension;
            Console.WriteLine(ext);

            if (!file.Exists)
            {
                MessageBox.Show("文件不存在!请确保要处理的文件存在,或重新选择文件。");
                return;
            }

            //输出文件路径
            String outPath = dir + "\\" + name.Substring(0, name.Length - ext.Length) + "_之前分割字符串_" + GetTimeStamp() + "" + ext;

            StreamReader reader = new StreamReader(filePath);
            StreamWriter writer = new StreamWriter(outPath);

            String line = null;
            while ((line = reader.ReadLine()) != null)
            {
                writer.WriteLine(line);
                if (isReg && reg != null )
                {
                    if (reg.IsMatch(line))
                    {
                        break;
                    }
                } else if (line.Contains(str))
                {
                    break;
                }
            }

            reader.Close();
            writer.Close();

            MessageBox.Show("处理完成!");
        }

        private void button5_Click(object sender, EventArgs e)
        {
            //文件路径
            String filePath = filePathEdt.Text;
            if (filePath.Trim().Length <= 1)
            {
                MessageBox.Show("请选择文件！");
                return;
            }

            //保存之后分割字符串
            String str = afterStrEdt.Text;

            if (str.Length <= 0)
            {
                MessageBox.Show("之后分割字符串不能为空!");
                return;
            }

            Boolean isReg = afterRegCbox.Checked;
            if (isReg)
            {
                reg = new Regex(str);
            }

            FileInfo file = new FileInfo(filePath);
            String dir = file.DirectoryName;
            Console.WriteLine(dir);
            String name = file.Name;
            Console.WriteLine(name);
            String fullName = file.FullName;
            Console.WriteLine(fullName);
            String ext = file.Extension;
            Console.WriteLine(ext);

            if (!file.Exists)
            {
                MessageBox.Show("文件不存在!请确保要处理的文件存在,或重新选择文件。");
                return;
            }

            //输出文件路径
            String outPath = dir + "\\" + name.Substring(0, name.Length - ext.Length) + "_之后分割字符串_" + GetTimeStamp() + "" + ext;

            StreamReader reader = new StreamReader(filePath);
            StreamWriter writer = new StreamWriter(outPath);

            String line = null;
            Boolean start = false;
            while ((line = reader.ReadLine()) != null)
            {
                if (isReg && reg != null )
                {
                    if (reg.IsMatch(line) || start )
                    {
                        start = true;
                        writer.WriteLine(line);
                    }
                } else if (line.Contains(str) || start )
                {
                    start = true;
                    writer.WriteLine(line);
                }
            }

            reader.Close();
            writer.Close();

            MessageBox.Show("处理完成!");
        }

        private void button6_Click(object sender, EventArgs e)
        {
            //文件路径
            String filePath = filePathEdt.Text;
            if (filePath.Trim().Length <= 1)
            {
                MessageBox.Show("请选择文件！");
                return;
            }

            //文件分割个数
            String str = splitCntEdt.Text;

            if (str.Length <= 0)
            {
                MessageBox.Show("文件分割个数不能为空!");
                return;
            }

            if (str.Trim().Equals("0")) {
                MessageBox.Show("分割数为0 不需要分割");
                return;
            }

            FileInfo file = new FileInfo(filePath);
            String dir = file.DirectoryName;
            Console.WriteLine(dir);
            String name = file.Name;
            Console.WriteLine(name);
            String fullName = file.FullName;
            Console.WriteLine(fullName);
            String ext = file.Extension;
            Console.WriteLine(ext);

            if (!file.Exists)
            {
                MessageBox.Show("文件不存在!请确保要处理的文件存在,或重新选择文件。");
                return;
            }

            button6.Enabled = false;
            splitCntEdt.Enabled = false;
            button1.Enabled = false;
            button2.Enabled = false;
            button3.Enabled = false;
            button4.Enabled = false;
            button5.Enabled = false;
            afterStrEdt.Enabled = false;
            beforeStrEdt.Enabled = false;
            noContainsStrEdt.Enabled = false;
            containsStrEdt.Enabled = false;
            filePathEdt.Enabled = false;


            toolStripProgressBar1.Value = 0;

            Thread th = new Thread(new ThreadStart(splitFile));
            th.IsBackground = true;
            th.Start();
          
        }

        private void splitFile() {

            //文件路径
            String filePath = filePathEdt.Text;

            //文件分割个数
            String str = splitCntEdt.Text;

            FileInfo file = new FileInfo(filePath);
            String dir = file.DirectoryName;
            Console.WriteLine(dir);
            String name = file.Name;
            Console.WriteLine(name);
            String fullName = file.FullName;
            Console.WriteLine(fullName);
            String ext = file.Extension;
            Console.WriteLine(ext);

            //-------------------------------------------------
            


            long readSize = 0;

            FileStream fileStream = new FileStream(filePath, FileMode.Open);

            long fileSize = file.Length;
            long progressSize = fileSize / 100;
            int splitNumber = int.Parse(str.Trim());
            long blockSize = fileSize / splitNumber;

            for (int i = 1; i <= splitNumber; i++)
            {
                //输出文件路径
                String outPath = dir + "\\" + name.Substring(0, name.Length - ext.Length) + "_拆分文件_" + i + "_" + GetTimeStamp() + "" + ext;

                FileInfo outFileInfo = new FileInfo(outPath);
                if (outFileInfo.Exists) {
                    outFileInfo.Delete();
                }

                FileStream outStream = new FileStream(outPath, FileMode.OpenOrCreate);
                
                int b = -1;
                while ((b = fileStream.ReadByte()) >= 0)
                {
                    outStream.WriteByte((byte)b);
                    readSize++;
                    if (readSize > blockSize * i)
                    {
                        break;
                    }
                    if (readSize % progressSize == 0) {
                        _context.Post(progressStep, "");
                    }
                }
                outStream.Close();
            }

            Console.WriteLine("共处理数据:" + readSize);

            fileStream.Close();

            _context.Post(spliteFileComplete, "");
            
        }

        private void progressStep(object obj) {
            toolStripProgressBar1.PerformStep();
        }

        private void spliteFileComplete(object obj) {
            button6.Enabled = true;
            splitCntEdt.Enabled = true;
            button1.Enabled = true;
            button2.Enabled = true;
            button3.Enabled = true;
            button4.Enabled = true;
            button5.Enabled = true;
            afterStrEdt.Enabled = true;
            beforeStrEdt.Enabled = true;
            noContainsStrEdt.Enabled = true;
            containsStrEdt.Enabled = true;
            filePathEdt.Enabled = true;
            MessageBox.Show("处理完成!");
        }

        private void selectMergeFolderBtn_Click(object sender, EventArgs e)
        {
            Console.WriteLine("合并输入框离开");
            FolderBrowserDialog folderBrowserDialog = new FolderBrowserDialog();
            folderBrowserDialog.Description = "请选择要合并的文件所在文件夹";
            if (folderBrowserDialog.ShowDialog() == DialogResult.OK)
            {
                //...
                mergeInpEdt.Text = folderBrowserDialog.SelectedPath;
            }
        }

        private void mergeBtn_Click(object sender, EventArgs e)
        {
            String path = mergeInpEdt.Text;
            String outFile = path + ".all." + GetTimeStamp();

            if (!Directory.Exists(path))
            {
                MessageBox.Show("选择的文件夹不存在!");
                return;
            }
            else {
                MessageBox.Show("文件夹存在 将合并为单个文件:" + outFile );
            }

            FileStream outFileStream = new FileStream(outFile, FileMode.OpenOrCreate);

            foreach (string fileStr in Directory.GetFiles(path))
            {
                FileStream fsr1 = new FileStream(fileStr, FileMode.Open, FileAccess.Read);
                byte[] btArr = new byte[fsr1.Length];
                fsr1.Read(btArr, 0, Convert.ToInt32(fsr1.Length));
                fsr1.Close();
                outFileStream.Write(btArr, 0, btArr.Length);
            }
            outFileStream.Close();

            MessageBox.Show("处理完成!");

        }

        public static long GetTimeStamp()
        {
            TimeSpan ts = DateTime.UtcNow - new DateTime(1970, 1, 1, 0, 0, 0, 0);
            return Convert.ToInt64(ts.TotalSeconds * 1000);
        }

        private void onMergeEdtDragEnter(object sender, DragEventArgs e)
        {
            if (e.Data.GetDataPresent(DataFormats.FileDrop))      //判断该文件是否可以转换到文件放置格式
            {
                e.Effect = DragDropEffects.Link;       //放置效果为链接放置
            }
            else
            {
                e.Effect = DragDropEffects.None;      //不接受该数据,无法放置，后续事件也无法触发
            }
        }

        private void onMergeEdtDragDrop(object sender, DragEventArgs e)
        {
            string path = ((System.Array)e.Data.GetData(DataFormats.FileDrop)).GetValue(0).ToString();     //获取文件路径
            mergeInpEdt.Text = path;
        }

        private void onFilePathEdtDragDrop(object sender, DragEventArgs e)
        {
            if (e.Data.GetDataPresent(DataFormats.FileDrop))      //判断该文件是否可以转换到文件放置格式
            {
                e.Effect = DragDropEffects.Link;       //放置效果为链接放置
            }
            else
            {
                e.Effect = DragDropEffects.None;      //不接受该数据,无法放置，后续事件也无法触发
            }
        }

        private void onFilePathEdtDragEnter(object sender, DragEventArgs e)
        {
            string path = ((System.Array)e.Data.GetData(DataFormats.FileDrop)).GetValue(0).ToString();     //获取文件路径
            filePathEdt.Text = path;
        }

        private void substringBtn_Click(object sender, EventArgs e)
        {

            //文件路径
            String filePath = filePathEdt.Text;
            if (filePath.Trim().Length <= 1)
            {
                MessageBox.Show("请选择文件！");
                return;
            }

            //去除行内容
            String str = substringEdt.Text;

            if (str.Length <= 0)
            {
                MessageBox.Show("去除行内容字符串不能为空!");
                return;
            }

            //正则
            Boolean isReg = substringRegCbox.Checked;
            if (isReg)
            {
                reg = new Regex(str);
            }


            FileInfo file = new FileInfo(filePath);
            String dir = file.DirectoryName;
            Console.WriteLine(dir);
            String name = file.Name;
            Console.WriteLine(name);
            String fullName = file.FullName;
            Console.WriteLine(fullName);
            String ext = file.Extension;
            Console.WriteLine(ext);

            if (!file.Exists)
            {
                MessageBox.Show("文件不存在!请确保要处理的文件存在,或重新选择文件。");
                return;
            }

            //输出文件路径
            String outPath = dir + "\\" + name.Substring(0, name.Length - ext.Length) + "_去除行内容_" + GetTimeStamp() + "" + ext;

            StreamReader reader = new StreamReader(filePath);
            StreamWriter writer = new StreamWriter(outPath);

            String line = null;
            while ((line = reader.ReadLine()) != null)
            {
                if (isReg && reg != null)
                {
                    if (reg.IsMatch(line))
                    {
                        MatchCollection mc = reg.Matches(line);
                        for (int i = 0; i < mc.Count; i++)
                        {
                            line = line.Replace(mc[i].Value, "");
                        }
                    }
                }
                else if (line.Contains(str))
                {
                    line = line.Replace(str, "");
                }

                writer.WriteLine(line);

            }

            reader.Close();
            writer.Close();

            MessageBox.Show("处理完成!");

        }
    }
}
