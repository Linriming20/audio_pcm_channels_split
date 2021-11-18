
### 1. 编译

```bash
$ make 	# or `make CC=your-corosscompile-gcc`
```

### 2. 使用

注意：分离左右声道的前提是输入的PCM文件（数据）是双声道。

```bash
$ ./pcm_channels_split
Usage: ./pcm_channels_split in.pcm out_l.pcm out_r.pcm
examples:
         ./pcm_channels_split ./audio/test_22050_16_2.pcm ./test_22050_16_1-l.pcm ./test_22050_16_1-r.pcm
         ./pcm_channels_split ./audio/test_44100_16_2.pcm ./test_44100_16_1-l.pcm ./test_44100_16_1-r.pcm
```

### 附录（demo目录架构）

```bash
.
├── audio
│   ├── test_22050_16_1-l.pcm
│   ├── test_22050_16_1-r.pcm
│   ├── test_22050_16_2.pcm
│   ├── test_44100_16_1-l.pcm
│   ├── test_44100_16_1-r.pcm
│   └── test_44100_16_2.pcm
├── docs
│   └── PCM音频数据 - 简书.mhtml
├── main.c
├── Makefile
└── README.md
```

