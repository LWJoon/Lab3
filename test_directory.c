/**
 * lab3 실습 2번
 * 파일 이름 : test_directory.c
 * 작성자 : 20153267 이원준
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
    DIR *dir;
    struct dirent *dirent;

    if(argc < 2)
    {
        fprintf(stderr, "실행 방법 : %s <directory path>\n", argv[0]);
        exit(1);
    }

    if((dir = opendir(argv[1])) < 0)
    {
        printf("열기 실패.\n");
        exit(1);
    }

    // dirent d_name = 파일 이름 , d_ino = 디렉토리 inode 번호
    while((dirent = readdir(dir)) != NULL)
    {
        printf("%s %ld\n", dirent->d_name, dirent->d_ino);
    }

    closedir(dir);

    return 0;
}


