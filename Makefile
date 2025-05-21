# コンパイラの指定
CC = gcc

# コンパイル時のオプション（警告表示を有効にするなど）
CFLAGS = -Wall

# 出力ファイル名
TARGET = main

# デフォルトターゲット（make の実行時に呼ばれる）
all: $(TARGET)

# main.c をコンパイルして main を作る
$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

# 不要ファイルの削除
clean:
	rm -f $(TARGET)
