def modify_text(text):
    words = text.split()
    modified_words = [word.capitalize() for word in words]
    modified_text = ''.join(modified_words)
    return modified_text

while True:
    try:
        line = input()
        output_line = modify_text(line)
        print(output_line)
    except EOFError:
        break
