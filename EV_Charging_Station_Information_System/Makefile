# Tên của chương trình
TARGET = main

# Thư mục chứa header và source files
HEADER_DIR = include
SOURCE_DIR = source

# Các tệp nguồn và tệp object tương ứng
SOURCES = $(wildcard $(SOURCE_DIR)/*.c)
OBJECTS = $(SOURCES:.c=.o)

# Trình biên dịch và các cờ
CC = gcc
CFLAGS = -I$(HEADER_DIR) -Wall -Wextra

# Quy tắc đầu tiên là quy tắc mặc định sẽ được thực thi
all: $(TARGET)

# Quy tắc để tạo ra tệp thực thi
$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^

# Quy tắc để biên dịch các tệp .c thành .o
$(SOURCE_DIR)/%.o: $(SOURCE_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(SOURCE_DIR)/*.o $(TARGET)

.PHONY: all clean
