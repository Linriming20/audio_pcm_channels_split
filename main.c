#include <stdio.h>
#include <stdlib.h>

int pcm_s16le_split(const char* file, const char* out_lfile, const char* out_rfile);

int main(int argc, char *argv[])
{
	if (argc != 4)
	{	
		printf("Usage: %s in.pcm out_l.pcm out_r.pcm\n", argv[0]);
		return -1;
	}

	/* 注意：分离左右声道的前提是输入的PCM文件（数据）是双声道 */
	pcm_s16le_split(argv[1], argv[2], argv[3]);

	return 0;
}

int pcm_s16le_split(const char* file, const char* out_lfile, const char* out_rfile)
{
	FILE *fp = fopen(file, "rb+");
	if (fp == NULL) {
		printf("open %s failed\n", file);
		return -1;
	}

	FILE *fp1 = fopen(out_lfile, "wb+");
	if (fp1 == NULL) {
		printf("open %s failed\n", out_lfile);
		return -1;
	}

	FILE *fp2 = fopen(out_rfile, "wb+");
	if (fp2 == NULL) {
		printf("open %s failed\n", out_rfile);
		return -1;
	}

	char * sample = (char *)malloc(4);
	while(!feof(fp)) {
		fread(sample, 1, 4, fp);
		// L
		fwrite(sample, 1, 2, fp1);
		// R
		fwrite(sample + 2, 1, 2, fp2);
	}
	free(sample);

	fclose(fp);
	fclose(fp1);
	fclose(fp2);
	return 0;
}

