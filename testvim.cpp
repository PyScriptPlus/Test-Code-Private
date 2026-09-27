#include <iostream>
#include <string>

void printHeader(const std::string& title) {
    std::cout << "\n========== " << title << " ==========\n\n";
}

void printCommand(char key, const std::string& description, const std::string& example = "") {
    std::cout << "▪ " << key << " → " << description;
    if (!example.empty()) std::cout << " (مثال: " << example << ")";
    std::cout << "\n";
}

int main() {
    printHeader("Vim Tutorial - Part 1: Basic Motions & Editing");

    printCommand('i', "Insert mode before cursor", "در middle of word برو و i بزن");
    printCommand('x', "Delete character under cursor");
    printCommand('X', "Delete character before cursor");
    printCommand('o', "Insert new line below and enter insert mode");
    printCommand('O', "Insert new line above and enter insert mode");
    printCommand('r', "Replace one character", "روی حرفی برو و r سپس حرف جدید بزن");
    printCommand('a', "Append after cursor");
    printCommand('u', "Undo last change");
    printCommand('z', "Center current line (zz)");
    printCommand('d', "Delete (dw=delete word, dd=delete line, 5dd=delete 5 lines)");
    printCommand('J', "Join current line with next line");
    printCommand('G', "Go to line (10G, G=end of file)");
    printCommand('y', "Yank/copy (yy, yw, 10yy)");
    printCommand('p', "Paste after cursor");
    printCommand('P', "Paste before cursor");
    printCommand('/', "Search forward (/pattern) then n/N for next/prev");
    printCommand('$', "Move cursor to end of line");
    printCommand('^', "Move cursor to first non-blank character of line");
    printCommand('.', "Repeat last change");

    std::cout << "\n✨ تمرین: یک فایل test.txt باز کن و هر دستور را امتحان کن.\n";
    std::cout << "🔥 ترکیبی مثل $dd یا ^dd رو هم امتحان کن.\n";
    return 0;
}