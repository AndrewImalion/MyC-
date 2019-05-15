//Powered by GreatBaron,2019,All Rights Reserved.


#include <fstream>
#include <iostream>
#include <string>
using namespace std;

char greeting[] = "Powered by GreatBaron,2019,All Rights Reserved.";
const int SIZE = 64;


int main() {


	ifstream inFile;
	ofstream objHTML;
	char filename[SIZE];
	string str;
	string htmlTitle;
	string picName;
	
	cout << greeting << endl;	//版权语
	for (size_t i = 0; i < 3; i++)
	{
		cout << endl;
	};	//空3行

	cout << "欢迎使用Baronica,这是一个由伯伦大人独立开发的自定义笔记文档编译程序" << endl;
	cout << "请输入您的文档源代码文件名" << endl;

	cin.getline(filename, SIZE);
	inFile.open(filename);  // associate inFile with a file
	if (!inFile.is_open())  // if failed to open file, error out
	{
		cout << "找不到对象：" << filename << endl;
		cout << "请确定文党路径、名正确\n文档名不应当超过64字节";
		exit(EXIT_FAILURE);
	};

	getline(inFile,str);
	htmlTitle = str;
	cout <<"标题："<< htmlTitle << endl;
	getline(inFile, str);
	picName = str;
	if (picName != "none")
	{
		cout << "自定义背景：" << picName << endl;
	};
	cout << "文档内容：" << endl;
	
	objHTML.open(htmlTitle + ".html");
	objHTML << "<!DOCTYPE html>" << "<html xmlns=\"http://www.w3.org/1999/xhtml\">" << "<head>    <meta charset=\"utf-8\" />    <link rel=\"stylesheet\" type=\"text/css\" href=\"https://andrewimalion.github.io/tools/DivSketch_v0.css\">    <link rel=\"icon\" href=\"https://andrewimalion.github.io/tools/IconPencil.ico\" type=\"image/x-icon\" />    <link rel=\"shortcut icon\" href=\"https://andrewimalion.github.io/tools/IconPencil.ico\" type=\"image/x-icon\"/>"
		<< "<title>" << htmlTitle << "</title>"
		<< "<body>" << "<img src=\"https://andrewimalion.github.io/img/forSkt.jpg\" class=\"bg-pic\"/>";
	if (picName != "none")
	{
		objHTML<<"<img class=\"bg-mypic\" src=\""<<picName <<"\"/>"<< endl;
	};

	objHTML << "<div id=\"container\"><div id=\"rawsrc\">";	
	while (!inFile.eof())
	{
		getline(inFile, str);
		objHTML << str<<"\n";
		cout << str << "\n";
	};
	objHTML << "</div>";
	
	objHTML <<"<center>Powered by GreatBaron,2019,All Rights Reserved.</center>"<< "</body></html>"
		<< "<script  Charset=\"gb2312\" Type=\"Text/JavaScript\" Language=\"JavaScript\" src=\"https://andrewimalion.github.io/tools/Sketch_basic.js\"></script>";

	for (size_t i = 0; i < 5; i++)
	{
		cout << endl;
	};	//空5行

	cout << "=====编译完成！=====" << "\n"
		<< "如果不能正常显示，请确认文档的编码格式为utf-8" << endl;

	for (size_t i = 0; i < 5; i++)
	{
		cout << endl;
	};	//空5行
	system("pause");
	return 0;
}