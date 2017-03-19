CC=gcc
CFLAGS= -O0 -g3 -Wall -fmessage-length=0
SOURCE_DIR= source
BINARY_DIR= bin

SOURCE_FILE= \
				main.c \
				custom_include.c \
				
#OBJECT_FILES_NAMES = $(addprefix $(BINARY_DIR) $(SOURCE_FILE:.c=.o))
#THUMB_OBJS = $(addprefix $(OBJ_DIR)/, $(THUMB_SOURCE:.c=.o) )
SOURCE_FILES_NAMES = $(addprefix $(SOURCE_DIR)/, $(SOURCE_FILE))
OBJECT_FILES_NAMES = $(addprefix $(BINARY_DIR)/, $(SOURCE_FILE:.c=.o))			


all: hello.exe
 
hello.exe: $(OBJECT_FILES_NAMES)
	$(CC) -o bin/hello $(OBJECT_FILES_NAMES)

#$(OBJECT_FILES_NAMES): $(SOURCE_FILES_NAMES)
#	$(CC) $(CFLAGS) -c $(SOURCE_FILES_NAMES) -o $(OBJECT_FILES_NAMES)
	
$(BINARY_DIR)/%.o : $(SOURCE_DIR)/%.c 
	$(CC) $(CFLAGS) -c $< -o $@	
clean:
	rm $(BINARY_DIR)/main.o $(BINARY_DIR)/hello.exe