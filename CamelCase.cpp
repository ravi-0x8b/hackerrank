#include <iostream>
#include <cstring>

int main(int argc, char** argv) {

    char prahse[]{ "saveChangesInTheEditor" };

    int wordCount{ 1 };
	for (int i = 0; i < std::strlen(prahse); i++) {
        // verifica se o caractere na posição i é maiúscula
        // se for verdade, incrementa no contador +1
		if (!(prahse[i] & 0x20))
			wordCount++;
	}
	std::cout << wordCount << '\n';
    return 0;
}