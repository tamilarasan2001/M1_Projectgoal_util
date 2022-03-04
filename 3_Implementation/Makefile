PROJ_NAME = main

TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC = src/addition.c\

src/sub.c\

src/division.c\

src/mod.c\

src/mul.c\

src/factorial.c\

src/pow.c\

INC_H = inc

INC_T = unity

ifdef OS

   RM = del 

   FixPath = $(subst /,\,$1)

   EXEC = exe

else

   ifeq ($(shell uname), Linux)

      RM = rm -rf

      FixPath = $1

	  EXEC = out   endif

endif

all:

	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))

	

run:

	$(call FixPath,$(PROJ_NAME).$(EXEC))

test:

	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) 

	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

clean:

	

	$(RM) *.$(EXEC)
