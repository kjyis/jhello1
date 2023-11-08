
#include <stdio.h>

int main(){

FILE *fp = NULL;
fp = fopen("heeloowoorld.txt","w");

if (fp==NULL)
printf("파일열기실패!");
else
printf("파일열기 성공!");
fputc('h',fp);
fputc('e',fp);
fputc('l',fp);
fputc('l',fp);
fputc('o',fp);
#include <stdio.h>

int main(){

FILE *fp = NULL;
fp = fopen("heeloowoorld.txt","w");

if (fp==NULL)
printf("파일열기실패!");
else
printf("파일열기 성공!");
fputc('h',fp);
fputc('e',fp);
fputc('l',fp);
fputc('l',fp);
fputc('o',fp);

fclose(fp);

return 0;


}


fclose(fp);

return 0;


}








