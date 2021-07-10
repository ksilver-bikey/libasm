#include "libasm.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str = "";
    char *str1 = "1";
    char *str10 = "1234567890";
    char *str1000 = "1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890";
    
    char *aim_my;
    char *aim_or;
    
    aim_my = (char *)calloc(1002, 1);
    aim_or = (char *)calloc(1002, 1);
    
    ft_strcpy(aim_my, str);
    strcpy(aim_or, str);
    printf("%s|  %d\n", aim_my, ft_strcmp(aim_my, aim_or));
    
    ft_strcpy(aim_my, str1);
    strcpy(aim_or, str1);
    printf("%s|  %d\n", aim_my, ft_strcmp(aim_my, aim_or));
    
    ft_strcpy(aim_my, str10);
    strcpy(aim_or, str10);
    printf("%s|  %d\n", aim_my, ft_strcmp(aim_my, aim_or));
    
    ft_strcpy(aim_my, str1000);
    strcpy(aim_or, str1000);
    printf("%s|  %d\n", aim_my, ft_strcmp(aim_my, aim_or));
    free(aim_my);
    free(aim_or);

    printf("--------ft_strdup--------\n");
    aim_my = ft_strdup(str);
    aim_or = strdup(str);
    printf("%s|  %d\n", aim_my, ft_strcmp(aim_my, aim_or));
    free(aim_my);
    free(aim_or);
    
    aim_my = ft_strdup(str1);
    aim_or = strdup(str1);
    printf("%s|  %d\n", aim_my, ft_strcmp(aim_my, aim_or));
    free(aim_my);
    free(aim_or);
    
    aim_my = ft_strdup(str10);
    aim_or = strdup(str10);
    printf("%s|  %d\n", aim_my, ft_strcmp(aim_my, aim_or));
    free(aim_my);
    free(aim_or);
    
    aim_my = ft_strdup(str1000);
    aim_or = strdup(str1000);
    printf("%s|  %d\n", aim_my, ft_strcmp(aim_my, aim_or));
    free(aim_my);
    free(aim_or);
    printf("--------ft_strcmp------\n");
    char *clstr1 = "";
    char *clstr2 = "123";
    char *clstr3 = "1";

    printf("ORIGINAL = %d\n", strcmp(clstr2, clstr1));
    printf("MY FUNC  = %d\n\n", ft_strcmp(clstr2, clstr1));
    printf("ORIGINAL = %d\n", strcmp(clstr1, clstr2));
    printf("MY FUNC  = %d\n\n", ft_strcmp(clstr1, clstr2));
    printf("ORIGINAL = %d\n", strcmp(clstr1, clstr3));
    printf("MY FUNC  = %d\n\n", ft_strcmp(clstr1, clstr3));
    printf("ORIGINAL = %d\n", strcmp(clstr2, clstr3));
    printf("MY FUNC  = %d\n\n", ft_strcmp(clstr2, clstr3));
    printf("ORIGINAL = %d\n", strcmp(clstr2, clstr2));
    printf("MY FUNC  = %d\n\n", ft_strcmp(clstr2, clstr2));
    printf("ORIGINAL = %d\n", strcmp(clstr1, clstr1));
    printf("MY FUNC  = %d\n\n", ft_strcmp(clstr1, clstr1));
    
    char *clstr = "";
    char *clstr0 = "1";
    char *clstr10 = "1234567890";
    char *clstr1000 = "1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890    1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890    1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890    1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890    1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890    1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890    1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890    1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890    1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890    1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890";

    printf("---------------ft_strlen---------------------\n");

    printf("ORIGINAL = %lu\n", strlen(clstr));
    printf("MY FUNC  = %lu\n\n", ft_strlen(clstr));

    printf("ORIGINAL = %lu\n", strlen(clstr0));
    printf("MY FUNC  = %lu\n\n", ft_strlen(clstr0));

    printf("ORIGINAL = %lu\n", strlen(clstr10));
    printf("MY FUNC  = %lu\n\n", ft_strlen(clstr10));

    printf("ORIGINAL = %lu\n", strlen(clstr1000));
    printf("MY FUNC  = %lu\n\n", ft_strlen(clstr1000));
    
    printf("----------ft_read / ft_write---------\n");
    char hiho[1010];
    int cnt;
    int fd;
    int aim_fd;
    
    bzero(hiho, 1010);
    cnt = ft_read(0, hiho, 50);
    aim_fd = open("aim.txt", O_CREAT | O_WRONLY, 0777);
    ft_write(1, hiho, cnt);
    ft_write(aim_fd, hiho, cnt);
    ft_write(1, "-----\n", 6);
    bzero(hiho, 1000);
    fd = open("test.txt", O_RDONLY);
    
    cnt = ft_read(fd, hiho, 2);
    ft_write(1, hiho, cnt);
    ft_write(aim_fd, hiho, cnt);
    ft_write(1, "-----\n", 6);
    bzero(hiho, 1000);
    cnt = ft_read(fd, hiho, 4);
    ft_write(1, hiho, cnt);
    ft_write(aim_fd, hiho, cnt);
    ft_write(1, "-----\n", 6);
    bzero(hiho, 1000);
    cnt = ft_read(fd, hiho, 11);
    ft_write(1, hiho, cnt);
    ft_write(aim_fd, hiho, cnt);
    ft_write(1, "-----\n", 6);
    bzero(hiho, 1000);
    cnt = ft_read(fd, hiho, 1010);
    ft_write(1, hiho, cnt);
    ft_write(aim_fd, hiho, cnt);
    close(fd);
    close(aim_fd);
    return (0);
}
