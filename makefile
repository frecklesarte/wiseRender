##########################################################################

CC := clang

BUILD_DIR := build-files
SRC_DIR := src/wiseRender
SRC := $(SRC_DIR)/main.cpp
INC := -Isrc -Ilibs/glad/include
LIBS := -lm -lglfw

BIN := $(BUILD_DIR)/wiseRender
GLAD = $(BUILD_DIR)/glad.o

build: $(GLAD)
	$(CC) $(CFLAGS) $(SRC) $(GLAD) -o $(BIN) $(INC) $(LIBS)
	time $(BIN)

$(GLAD):
	$(CC) $(CFLAGS) -c libs/glad/src/gl.c -o $(GLAD) $(INC) -Idep/glad/include
