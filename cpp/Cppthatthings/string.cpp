/*** 
 * @Author: zqc
 * @Date: 2021-12-26 09:41:12
 * @LastEditTime: 2022-01-21 15:09:35
 * @LastEditors: zqc
 * @Description: zqc's file configuration
 * @FilePath: \cpp\Cppthatthings\string.cpp
 * @version: 1.0
 */

#include <string.h>
#include <stdio.h>
 
int main(){
    char s[] = "a,b*c,d";
    const char *sep = ",*"; //可按多个字符来分割
    char *p;
    p = strtok(s, sep);
    // printf("%s ",p);
    while(p){
        printf("%s ", p);
        p = strtok(NULL, sep);
    }
    printf("\n");
    return 0;
}

