find . -name "*.sh" -execdir echo {} ";" | sed 's/\.sh//' | sed 's=./=='