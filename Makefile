
COMMIT_MESSAGE_PROMPT = "Add the commit message:"
BRANCH_PROMT = "Enter branch (main):"
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Find and delete all "a.out" files in subdirectories

cleanout:
	find . -type f -name "a.out" -exec rm -f {} \;

#script to automate my repository update

gitpush:
	git status --porcelain
	git add .
		@echo $(COMMIT_MESSAGE_PROMPT); \
	read COMMITMESSAGE; \
	git commit -m "$$COMMITMESSAGE"
		@echo $(BRANCH_PROMT); \
	read BRANCH; \
	git push origin $$BRANCH; \
		@echo "Repository updated successfully on branch $$BRANCH" 
	git log -n 3

cc:
	cc -Wall -Wextra -Werror read FILE; \

.PHONY: default cleanout gitpush
