GIT = git
ADD = $(GIT) add .
COMMIT = $(GIT) commit -m "cpp03"
PUSH = $(GIT) push

all:
	$(ADD) && $(COMMIT) && $(PUSH)