namespace 日志处理工具
{
    partial class Form1
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要修改
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.filePathEdt = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.label2 = new System.Windows.Forms.Label();
            this.containsStrEdt = new System.Windows.Forms.TextBox();
            this.button2 = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.noContainsStrEdt = new System.Windows.Forms.TextBox();
            this.button3 = new System.Windows.Forms.Button();
            this.button4 = new System.Windows.Forms.Button();
            this.beforeStrEdt = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.button5 = new System.Windows.Forms.Button();
            this.afterStrEdt = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.button6 = new System.Windows.Forms.Button();
            this.splitCntEdt = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.toolStripProgressBar1 = new System.Windows.Forms.ToolStripProgressBar();
            this.statusStrip1 = new System.Windows.Forms.StatusStrip();
            this.selectMergeFolderBtn = new System.Windows.Forms.Button();
            this.label8 = new System.Windows.Forms.Label();
            this.mergeInpEdt = new System.Windows.Forms.TextBox();
            this.mergeBtn = new System.Windows.Forms.Button();
            this.containsRegCbox = new System.Windows.Forms.CheckBox();
            this.notContainsRegCbox = new System.Windows.Forms.CheckBox();
            this.beforeRegCbox = new System.Windows.Forms.CheckBox();
            this.afterRegCbox = new System.Windows.Forms.CheckBox();
            this.substringRegCbox = new System.Windows.Forms.CheckBox();
            this.substringBtn = new System.Windows.Forms.Button();
            this.substringEdt = new System.Windows.Forms.TextBox();
            this.label9 = new System.Windows.Forms.Label();
            this.statusStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // filePathEdt
            // 
            this.filePathEdt.AllowDrop = true;
            this.filePathEdt.Location = new System.Drawing.Point(13, 40);
            this.filePathEdt.Name = "filePathEdt";
            this.filePathEdt.Size = new System.Drawing.Size(377, 21);
            this.filePathEdt.TabIndex = 0;
            this.filePathEdt.DragDrop += new System.Windows.Forms.DragEventHandler(this.onFilePathEdtDragDrop);
            this.filePathEdt.DragEnter += new System.Windows.Forms.DragEventHandler(this.onFilePathEdtDragEnter);
            this.filePathEdt.Leave += new System.EventHandler(this.filePathEdt_Leave);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(13, 22);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(125, 12);
            this.label1.TabIndex = 1;
            this.label1.Text = "选择要处理的日志文件";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(396, 40);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 2;
            this.button1.Text = "浏览";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(11, 85);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(137, 12);
            this.label2.TabIndex = 3;
            this.label2.Text = "保存包含该字符串的数据";
            // 
            // containsStrEdt
            // 
            this.containsStrEdt.Location = new System.Drawing.Point(152, 80);
            this.containsStrEdt.Name = "containsStrEdt";
            this.containsStrEdt.Size = new System.Drawing.Size(191, 21);
            this.containsStrEdt.TabIndex = 4;
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(396, 80);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(75, 23);
            this.button2.TabIndex = 5;
            this.button2.Text = "开始处理";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(11, 131);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(149, 12);
            this.label3.TabIndex = 6;
            this.label3.Text = "保存不包含该字符串的数据";
            // 
            // noContainsStrEdt
            // 
            this.noContainsStrEdt.Location = new System.Drawing.Point(164, 126);
            this.noContainsStrEdt.Name = "noContainsStrEdt";
            this.noContainsStrEdt.Size = new System.Drawing.Size(179, 21);
            this.noContainsStrEdt.TabIndex = 7;
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(397, 126);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(75, 23);
            this.button3.TabIndex = 8;
            this.button3.Text = "开始处理";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // button4
            // 
            this.button4.Location = new System.Drawing.Point(397, 171);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(75, 23);
            this.button4.TabIndex = 11;
            this.button4.Text = "开始处理";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.button4_Click);
            // 
            // beforeStrEdt
            // 
            this.beforeStrEdt.Location = new System.Drawing.Point(153, 171);
            this.beforeStrEdt.Name = "beforeStrEdt";
            this.beforeStrEdt.Size = new System.Drawing.Size(190, 21);
            this.beforeStrEdt.TabIndex = 10;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(11, 176);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(137, 12);
            this.label4.TabIndex = 9;
            this.label4.Text = "保存该字符串之前的数据";
            // 
            // button5
            // 
            this.button5.Location = new System.Drawing.Point(397, 217);
            this.button5.Name = "button5";
            this.button5.Size = new System.Drawing.Size(75, 23);
            this.button5.TabIndex = 14;
            this.button5.Text = "开始处理";
            this.button5.UseVisualStyleBackColor = true;
            this.button5.Click += new System.EventHandler(this.button5_Click);
            // 
            // afterStrEdt
            // 
            this.afterStrEdt.Location = new System.Drawing.Point(152, 217);
            this.afterStrEdt.Name = "afterStrEdt";
            this.afterStrEdt.Size = new System.Drawing.Size(191, 21);
            this.afterStrEdt.TabIndex = 13;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(11, 222);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(137, 12);
            this.label5.TabIndex = 12;
            this.label5.Text = "保存该字符串之后的数据";
            // 
            // button6
            // 
            this.button6.Location = new System.Drawing.Point(397, 313);
            this.button6.Name = "button6";
            this.button6.Size = new System.Drawing.Size(75, 23);
            this.button6.TabIndex = 17;
            this.button6.Text = "开始处理";
            this.button6.UseVisualStyleBackColor = true;
            this.button6.Click += new System.EventHandler(this.button6_Click);
            // 
            // splitCntEdt
            // 
            this.splitCntEdt.Location = new System.Drawing.Point(94, 315);
            this.splitCntEdt.Name = "splitCntEdt";
            this.splitCntEdt.Size = new System.Drawing.Size(249, 21);
            this.splitCntEdt.TabIndex = 16;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(11, 318);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(77, 12);
            this.label6.TabIndex = 15;
            this.label6.Text = "把文件拆分成";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(349, 320);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(41, 12);
            this.label7.TabIndex = 18;
            this.label7.Text = "个文件";
            // 
            // toolStripProgressBar1
            // 
            this.toolStripProgressBar1.Name = "toolStripProgressBar1";
            this.toolStripProgressBar1.Size = new System.Drawing.Size(100, 16);
            // 
            // statusStrip1
            // 
            this.statusStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripProgressBar1});
            this.statusStrip1.Location = new System.Drawing.Point(0, 423);
            this.statusStrip1.Name = "statusStrip1";
            this.statusStrip1.Size = new System.Drawing.Size(489, 22);
            this.statusStrip1.TabIndex = 19;
            this.statusStrip1.Text = "statusStrip1";
            // 
            // selectMergeFolderBtn
            // 
            this.selectMergeFolderBtn.Location = new System.Drawing.Point(316, 375);
            this.selectMergeFolderBtn.Name = "selectMergeFolderBtn";
            this.selectMergeFolderBtn.Size = new System.Drawing.Size(75, 23);
            this.selectMergeFolderBtn.TabIndex = 22;
            this.selectMergeFolderBtn.Text = "浏览";
            this.selectMergeFolderBtn.UseVisualStyleBackColor = true;
            this.selectMergeFolderBtn.Click += new System.EventHandler(this.selectMergeFolderBtn_Click);
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(12, 359);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(161, 12);
            this.label8.TabIndex = 21;
            this.label8.Text = "选择要合并的文件所在文件夹";
            // 
            // mergeInpEdt
            // 
            this.mergeInpEdt.AllowDrop = true;
            this.mergeInpEdt.Location = new System.Drawing.Point(12, 377);
            this.mergeInpEdt.Name = "mergeInpEdt";
            this.mergeInpEdt.Size = new System.Drawing.Size(295, 21);
            this.mergeInpEdt.TabIndex = 20;
            this.mergeInpEdt.DragDrop += new System.Windows.Forms.DragEventHandler(this.onMergeEdtDragDrop);
            this.mergeInpEdt.DragEnter += new System.Windows.Forms.DragEventHandler(this.onMergeEdtDragEnter);
            // 
            // mergeBtn
            // 
            this.mergeBtn.Location = new System.Drawing.Point(397, 375);
            this.mergeBtn.Name = "mergeBtn";
            this.mergeBtn.Size = new System.Drawing.Size(75, 23);
            this.mergeBtn.TabIndex = 23;
            this.mergeBtn.Text = "合并";
            this.mergeBtn.UseVisualStyleBackColor = true;
            this.mergeBtn.Click += new System.EventHandler(this.mergeBtn_Click);
            // 
            // containsRegCbox
            // 
            this.containsRegCbox.AutoSize = true;
            this.containsRegCbox.Location = new System.Drawing.Point(349, 84);
            this.containsRegCbox.Name = "containsRegCbox";
            this.containsRegCbox.Size = new System.Drawing.Size(48, 16);
            this.containsRegCbox.TabIndex = 24;
            this.containsRegCbox.Text = "正则";
            this.containsRegCbox.UseVisualStyleBackColor = true;
            // 
            // notContainsRegCbox
            // 
            this.notContainsRegCbox.AutoSize = true;
            this.notContainsRegCbox.Location = new System.Drawing.Point(349, 130);
            this.notContainsRegCbox.Name = "notContainsRegCbox";
            this.notContainsRegCbox.Size = new System.Drawing.Size(48, 16);
            this.notContainsRegCbox.TabIndex = 25;
            this.notContainsRegCbox.Text = "正则";
            this.notContainsRegCbox.UseVisualStyleBackColor = true;
            // 
            // beforeRegCbox
            // 
            this.beforeRegCbox.AutoSize = true;
            this.beforeRegCbox.Location = new System.Drawing.Point(349, 176);
            this.beforeRegCbox.Name = "beforeRegCbox";
            this.beforeRegCbox.Size = new System.Drawing.Size(48, 16);
            this.beforeRegCbox.TabIndex = 26;
            this.beforeRegCbox.Text = "正则";
            this.beforeRegCbox.UseVisualStyleBackColor = true;
            // 
            // afterRegCbox
            // 
            this.afterRegCbox.AutoSize = true;
            this.afterRegCbox.Location = new System.Drawing.Point(349, 222);
            this.afterRegCbox.Name = "afterRegCbox";
            this.afterRegCbox.Size = new System.Drawing.Size(48, 16);
            this.afterRegCbox.TabIndex = 27;
            this.afterRegCbox.Text = "正则";
            this.afterRegCbox.UseVisualStyleBackColor = true;
            // 
            // substringRegCbox
            // 
            this.substringRegCbox.AutoSize = true;
            this.substringRegCbox.Location = new System.Drawing.Point(349, 268);
            this.substringRegCbox.Name = "substringRegCbox";
            this.substringRegCbox.Size = new System.Drawing.Size(48, 16);
            this.substringRegCbox.TabIndex = 31;
            this.substringRegCbox.Text = "正则";
            this.substringRegCbox.UseVisualStyleBackColor = true;
            // 
            // substringBtn
            // 
            this.substringBtn.Location = new System.Drawing.Point(397, 263);
            this.substringBtn.Name = "substringBtn";
            this.substringBtn.Size = new System.Drawing.Size(75, 23);
            this.substringBtn.TabIndex = 30;
            this.substringBtn.Text = "开始处理";
            this.substringBtn.UseVisualStyleBackColor = true;
            this.substringBtn.Click += new System.EventHandler(this.substringBtn_Click);
            // 
            // substringEdt
            // 
            this.substringEdt.Location = new System.Drawing.Point(82, 263);
            this.substringEdt.Name = "substringEdt";
            this.substringEdt.Size = new System.Drawing.Size(261, 21);
            this.substringEdt.TabIndex = 29;
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(11, 268);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(65, 12);
            this.label9.TabIndex = 28;
            this.label9.Text = "去除行内容";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(489, 445);
            this.Controls.Add(this.substringRegCbox);
            this.Controls.Add(this.substringBtn);
            this.Controls.Add(this.substringEdt);
            this.Controls.Add(this.label9);
            this.Controls.Add(this.afterRegCbox);
            this.Controls.Add(this.beforeRegCbox);
            this.Controls.Add(this.notContainsRegCbox);
            this.Controls.Add(this.containsRegCbox);
            this.Controls.Add(this.mergeBtn);
            this.Controls.Add(this.selectMergeFolderBtn);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.mergeInpEdt);
            this.Controls.Add(this.statusStrip1);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.button6);
            this.Controls.Add(this.splitCntEdt);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.button5);
            this.Controls.Add(this.afterStrEdt);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.beforeStrEdt);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.noContainsStrEdt);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.containsStrEdt);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.filePathEdt);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "Form1";
            this.Text = "日志处理工具 V1.1.1 - by brok1n";
            this.statusStrip1.ResumeLayout(false);
            this.statusStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox filePathEdt;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox containsStrEdt;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox noContainsStrEdt;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button button4;
        private System.Windows.Forms.TextBox beforeStrEdt;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Button button5;
        private System.Windows.Forms.TextBox afterStrEdt;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Button button6;
        private System.Windows.Forms.TextBox splitCntEdt;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.ToolStripProgressBar toolStripProgressBar1;
        private System.Windows.Forms.StatusStrip statusStrip1;
        private System.Windows.Forms.Button selectMergeFolderBtn;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.TextBox mergeInpEdt;
        private System.Windows.Forms.Button mergeBtn;
        private System.Windows.Forms.CheckBox containsRegCbox;
        private System.Windows.Forms.CheckBox notContainsRegCbox;
        private System.Windows.Forms.CheckBox beforeRegCbox;
        private System.Windows.Forms.CheckBox afterRegCbox;
        private System.Windows.Forms.CheckBox substringRegCbox;
        private System.Windows.Forms.Button substringBtn;
        private System.Windows.Forms.TextBox substringEdt;
        private System.Windows.Forms.Label label9;
    }
}

