
#include <io.h>
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
 
 
//获取所有的文件名
void GetAllFiles( string path, vector<string>& files)  
{  
 
	long   hFile   =   0;  
	//文件信息  
	struct _finddata_t fileinfo;  
	string p;  
	if((hFile = _findfirst(p.assign(path).append("\\*").c_str(),&fileinfo)) !=  -1)  
	{  
		do  
		{   
			if((fileinfo.attrib &  _A_SUBDIR))  
			{  
				if(strcmp(fileinfo.name,".") != 0  &&  strcmp(fileinfo.name,"..") != 0)  
				{
					files.push_back(p.assign(path).append("\\").append(fileinfo.name) );
					GetAllFiles( p.assign(path).append("\\").append(fileinfo.name), files ); 
				}
			}  
			else  
			{  
				files.push_back(p.assign(path).append("\\").append(fileinfo.name) );  
			} 
 
		}while(_findnext(hFile, &fileinfo)  == 0);  
 
		_findclose(hFile); 
	} 
 
}  
 
//获取特定格式的文件名
void GetAllFormatFiles( string path, vector<string>& files,string format)  
{  
	//文件句柄  
	long   hFile   =   0;  
	//文件信息  
	struct _finddata_t fileinfo;  
	string p;  
	if((hFile = _findfirst(p.assign(path).append("\\*" + format).c_str(),&fileinfo)) !=  -1)  //有该文件就进入
	{  
		do  
		{    
			if((fileinfo.attrib &  _A_SUBDIR)) // /*比较文件类型是否是文件夹 attrib，
			//就是所查找文件的属性：__A_ARCH（存档）、_A_HIDDEN（隐藏）、_A_NORMAL（正常）、_A_RDONLY（只读）、 _A_SUBDIR（文件夹）、_A_SYSTEM（系统）。**/
			{  
				if(strcmp(fileinfo.name,".") != 0  &&  strcmp(fileinfo.name,"..") != 0)  
				{
					//files.push_back(p.assign(path).append("\\").append(fileinfo.name) );
					GetAllFormatFiles( p.assign(path).append("\\").append(fileinfo.name), files,format); 
				}
			}
			else  
			{  
				files.push_back(p.assign(path).append("\\").append(fileinfo.name) );  
			}  
		}while(_findnext(hFile, &fileinfo)  == 0);  
 
		_findclose(hFile); 
	} 
} 
 
// 该函数有两个参数，第一个为路径字符串(string类型，最好为绝对路径)；
// 第二个参数为文件夹与文件名称存储变量(vector类型,引用传递)。
// 在主函数中调用格式(并将结果保存在文件"AllFiles.txt"中，第一行为总数)：
 
int main()
{
	string filePath = "C:/Users/10123/Desktop/python/Smog";
	vector<string> files;  
	// string  distAll = "AllFiles.txt";
 
	//读取所有的文件，包括子文件的文件
	//GetAllFiles(filePath, files);
 
	//读取所有格式为txt的文件
	string format = ".txt";
	GetAllFormatFiles(filePath, files,format);
	// ofstream ofn(distAll);
	int size = files.size(); 
	// ofn<<size<<endl;
	for (int i = 0;i<size;i++)  
	{  
		// ofn<<files[i]<<endl;
        ifstream in(files[i]);  
        // ofstream out;
        // out.open(files[i],ios::out);
        string filename; 
        string line;
        string newline;
        string allline;
        if(in) // 有该文件  
        {
            // cout << 1111<<endl;
            while (getline (in, line)) // line中不包括每行的换行符  
            {   
                // cout << line <<endl;
                newline = '1'+ line.substr(1,line.size()-1)+'\n';
                allline +=newline;
                // cout << line << endl;
            }
            allline.erase(allline.size()-1,1);
            ofstream out;
            out.open(files[i],ios::out);
            out << allline;
            out.close();
        }
        else // 没有该文件  
        {  
            cout <<"no such file" << endl;  
        }   
		// cout<< files[i] << endl;
	}
	// ofn.close();
    
	return 0;
}