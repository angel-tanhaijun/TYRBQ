#------------------------------配置区域----------------------------

DIR=.

#动态库名以lib为前缀，以.so为后缀
BIN=$(DIR)/librbq.a

SHARE=--share

#动态链接库编译时需要-fPIC选项
#CFLAG=-fPIC

#链接动态库需要--share选项
#LFLAG=$(SHARE)

CC=gcc -o

#编译静态库用ar -cr命令
AR=ar -cr

CO=$(AR)
#编译动态链接库用gcc -o命令
#CO=$(CC)
#-------------------------以下为通用不变区域-----------------------

SRC=$(wildcard $(DIR)/*.c)
OBJ=$(patsubst %.c, %.o, $(SRC))

all:$(BIN)
$(BIN):$(OBJ)
	$(CO) $@ $^ $(LFLAG)
	cp *.h ../include
	cp $(BIN) ../libs 

$(DIR)/%.o:$(DIR)/%.c
	$(CC) $@ -c $< $(CFLAG)

.PHONY:clean
clean:
	rm $(OBJ) $(BIN) 
