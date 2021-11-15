
### 1. 编译

```bash
$ make 	# or `make CC=your-corosscompile-gcc`
```

### 2. 使用

注意：分离左右声道的前提是输入的PCM文件（数据）是双声道。

```bash
$ ./pcm_channels_split ./pcm_file/test_44100_16_2.pcm test_44100_16_1-l.pcm test_44100_16_1-r.pcm
```

