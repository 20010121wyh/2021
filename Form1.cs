using System;
using System.Windows.Forms;
using System.IO;

namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string path = textBox1.Text;
            string content = textBox2.Text;
            if (String.IsNullOrEmpty(path) == true)
            {
                MessageBox.Show("文件路径不能为空");
                return;
            }
            try
            {
                FileStream FS = new FileStream(path, FileMode.CreateNew);//创建一个文件流
                    StreamWriter SW = new StreamWriter(FS);//创建写入器
                SW.Write(content);//将录入的内容写入文件
                SW.Close();
                FS.Close();
                MessageBox.Show("写入成功");
            }
            catch(Exception ex)
            {
                MessageBox.Show(ex.Message.ToString());
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            string path = textBox1.Text;
            string content;
            if(String.IsNullOrEmpty(path)==true)
            {
                MessageBox.Show("文件路径不能为空");
                return;
            }
            try
            {
                FileStream FS = new FileStream(path,FileMode.Open);//创建文件流
                StreamReader SR = new StreamReader(FS,System.Text.Encoding.Default);//创建读取器
                content = SR.ReadToEnd();//读取文件所有内容
                textBox2.Text = content;//将内容输出在textBox2
                SR.Close();
                FS.Close();
            }
            catch(Exception ex)
            {
                MessageBox.Show(ex.Message.ToString());
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            textBox2.Text = "";
        }

        private void button4_Click(object sender, EventArgs e)
        {
            System.Environment.Exit(0);
        }
    }
}
