all: pcm_channels_split

CC := gcc
CFLAG := 

OUTPUT := pcm_channels_split

pcm_channels_split : main.c
	$(CC) $^ $(CFLAG) -o $@

clean : 
	rm -rf $(OUTPUT)
.PHONY := clean

