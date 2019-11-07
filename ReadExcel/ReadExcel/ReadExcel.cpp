// ReadExcel.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#if 1
// 选用不同的命名空间
#include "BasicExcelVC6.hpp"
using namespace  YExcelVC6;
#else
#include "BasicExcel.hpp"
using namespace YExcel;
#endif

// Load a workbook with one sheet, display its contents
int main(int argc, char* argv[])
{
	BasicExcel e;
	// load excel
	e.Load("example1.xls");

	BasicExcelWorksheet* sheet = e.GetWorksheet("Sheet1");
	if (sheet){
		size_t maxRows = sheet->GetTotalRows();
		size_t maxCols = sheet->GetTotalCols();
		cout << "Dimension of " << sheet->GetAnsiSheetName() <<
			" (" << maxRows << ", " << maxCols << ")" << endl;

		for (size_t r = 0; r < maxRows; ++r){
			printf("%10d", r+1);
			for (size_t c = 0; c < maxCols; ++c){
				BasicExcelCell* cell = sheet->Cell(r,c);
				switch (cell->Type())
				{
				case BasicExcelCell::UNDEFINED:
					printf(" ");
					break;
				case BasicExcelCell::INT:
					printf("%10d", cell->GetInteger());
					break;
				case BasicExcelCell::DOUBLE:
					printf("%10.6lf", cell->GetDouble());
					break;
				case BasicExcelCell::STRING:
					printf("%10s", cell->GetString());
					break;
				case BasicExcelCell::WSTRING:
					wprintf(L"%10s", cell->GetWString());
					break;
				}
			}
			cout << endl;
		}
	}else{
		printf("cannot read this sheet!\n");
	}
	cout << endl;
	system("pause");

	return 0;
}