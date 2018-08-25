#include<stdio.h>

int main(void)
{
	float file_size;
  float download_speed;

	printf("Tell me what the download speed in Mb/s and the size of the file in MB:");
	scanf("%f %f", &download_speed, &file_size);
  printf("\nAt %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n", download_speed, file_size, ((8*file_size)/download_speed));
  return 0;
}
