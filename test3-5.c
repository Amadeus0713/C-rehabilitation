#include <stdio.h>
#include <string.h>

void buf(float data, char *str, int size)
{
    snprintf(str, size, "%.2f", data);
}

int main(void)
{
    float speed, size_file;

    printf("Please enter the download speed(Mb/s)\n");
    scanf("%f", &speed);
    printf("Please enter the size of file(MB)\n");
    scanf("%f", &size_file);

    float download_time = size_file / speed;
    char str_speed[20], str_size_file[20], str_download_time[20];

    buf(speed, str_speed, sizeof(str_speed));
    buf(size_file, str_size_file, sizeof(str_size_file));
    buf(download_time, str_download_time, sizeof(str_download_time));

    printf("At %s megabits per second, a file of %s megabytes downloads in %s seconds", str_speed, str_size_file, str_download_time);
}