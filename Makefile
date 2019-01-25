.PHONY = all clean

CC      := gcc
SRC     := ./src
BIN     := ./bin
SRCS    := $(wildcard $(SRC)/*.c)
BINS    := $(patsubst $(SRC)/%.c, $(BIN)/%, $(SRCS))
LDFLAGS := -lraylib

all: $(BINS)

$(BIN):
	mkdir $(BIN)

$(BIN)/%: $(SRC)/%.c $(BIN)
	$(CC) $(LDFLAGS) $< -o $@

clean:
	rm -f $(BINS)
