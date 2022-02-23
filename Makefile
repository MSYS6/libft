# Compiler
CC = gcc

DEBUG_FLAG	=	-g -O0 -fsanitize=address #makeコマンドでデバッグするときに使う,1行ずつ実行される
CFLAGS = -Wall -Wextra -Werror # $(DEBUG_FLAG) #オプションの指定
NORM	=	norminette -R CheckForbiddenSourceHeader

# Static library
NAME = libft.a #作りたいファイル名

#Header file
#HEADER = libft.h #今回の場合は、プロトタイプ宣言などをしたヘッダファイルを読み込んでる。

# Source files
SRCS = $(wildcard *.c) #makeファイルでワイルドカードを使うときは、wildcardの後に使いたいやつを入力,$は変数展開

# Object file name
# Generate .o files from .c files defined in SRCS
OBJS = $(SRCS:%.c=%.o)#作りたいオブジェクトファイル名を,上のSRCSで指定された.cファイルの名前を用いて.oの名前に指定している

# Rules #make [以下で指定した文字列] で、それぞれ実行したいコマンドを実行できる
all: $(NAME)#allと指定された場合 :の右側を展開

$(NAME): $(OBJS)#22行目で展開したNAMEはOBJSから生成されるダロウと定義している,$(A): $(B) の意味は、Aを作る材料としてBを作る
		ar rc $(NAME) $(OBJS)
#25行目はallの処理の中身,24行目までは依存ファイルの準備
#ar rc [作りたいライブラリの名前] [中に入れるオブジェクトファイル]<=静的ライブラリを作るコマンド


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	norm
norm:
	$(NORM) $(TARGET_DIR)