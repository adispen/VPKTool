#include "vpk.h"

int main(int argc, char** argv) {
	if(argc < 3) {
		printf("Please provide two file arguments\n");
		return 1;
	}
	FILE* vpkfile1 = fopen(argv[1],"r");
	FILE* vpkfile2 = fopen(argv[2],"r");
	vpk* v1 = readvpk(vpkfile1);
	vpk* v2 = readvpk(vpkfile2);
	
    printdiff(v1, v2);
//	printvpkversioningdata(v);

	freevpk(v1);
	freevpk(v2);
	fclose(vpkfile1);
	fclose(vpkfile2);
	return 0;
}
