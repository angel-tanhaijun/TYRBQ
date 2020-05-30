####################################################
#将所在目录下的所有C源文件，编译成一个可执行文件
#实际使用时基本修改下配置参数部分即可
####################################################

#1 查找.c源文件，并定义同名.o文件
#makefile有隐晦规则，自动会将.c文件编译成.o目标文件
SRCS := $(wildcard *.c)
OBJS := $(SRCS:%.c=%.o) 

####################################################
#2 配置参数
#TARGET 目标名 必须设置
#CC 编译工具链名称
#LIBS 库文件 
#    用相对路径或者绝对路径均可，多个库文件用空格
#    #    隔开，没有留空
#LDFLAGS 链接库文件标记，没有留空
#INCLUDE 头文件搜索目录 
#    使用-I开头，如-I./include，表示要到
#    #    ./include目录下搜索头文件，多个目录，用空格
#    隔开，没有留空
#    #DEFINES 自定义选项，如-D"DEBGU",定义宏"DEBUG"
#CFLAGS 编译选项，发布版本，可以去除-g，减小程序
####################################################
TARGET  := demo
CC      := gcc
LIBS    := -L ../libs
LDFLAGS := -lrbq
DEFINES :=
INCLUDE := -I ../include
CFLAGS  := -g -Wall -O3 -lpthread -lm $(DEFINES) $(INCLUDE)

#3 规则 规则部分最好不用修改
.PHONY : all clean rebuild

all: $(TARGET)  

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS) $(LIBS)

rebuild: clean all

clean:
	rm -rf $(OBJS)
	rm -rf $(TARGET)

