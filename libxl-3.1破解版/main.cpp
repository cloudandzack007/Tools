#include <iostream>
#include <libxl.h>
#include <Windows.h>

using namespace std;
using namespace libxl;

//中文的内容读出来后要进行编码的转换，这个为转换函数：wchar_t to char
char *w2c(char *pcstr,const wchar_t *pwstr, size_t len)

{
	int nlength=wcslen(pwstr);
	//获取转换后的长度
	int nbytes = WideCharToMultiByte( 0, 0, pwstr, nlength, NULL,0,NULL, NULL ); 
	if(nbytes>len)   nbytes=len;
	// 通过以上得到的结果，转换unicode 字符为ascii 字符
	WideCharToMultiByte( 0,0, pwstr, nlength,   pcstr, nbytes, NULL,   NULL );
	return pcstr ;
}

int main(int argc, char* argv[])
{
	Book* book = xlCreateXMLBook();
	if(book->load(L"1.xlsx")){
		Sheet * sheet = book->getSheet(0);
		if(sheet){
			CellType celltype = sheet->cellType(1,1);
			cout<<"the type is:"<<celltype<<endl;

            const wchar_t * t = sheet->readStr(1,1);
			char *pcstr = (char *)malloc(sizeof(char)*(2 * wcslen(t)+1));
			memset(pcstr , 0 , 2 * wcslen(t)+1 );
			w2c(pcstr,t,2 * wcslen(t)+1) ;
			cout<<"result:"<<pcstr<<endl;
			free(pcstr);
		}
	}
	system("pause");
	return 0;
}
