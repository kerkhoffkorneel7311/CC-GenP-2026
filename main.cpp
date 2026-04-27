#include <iostream>
#include <windows.h>
#include "patcher_core.h"

int main() {
    SetConsoleTitleA("Adobe GenP Studio v4.5 | Master Collection 2026");
    std::cout << "--- Adobe GenP Studio: Universal Patcher 2026 ---" << std::endl;

    if (Patcher::CheckAdmin()) {
        std::cout << "[*] Scanning for installed Adobe Creative Cloud apps..." << std::endl;
        Patcher::ScanAndIdentify();
        std::cout << "[*] Found: Photoshop, Premiere Pro, After Effects." << std::endl;
        std::cout << "[?] Apply universal bypass? (Y/N): ";
        
        char input;
        std::cin >> input;
        if (input == 'y' || input == 'Y') {
            Patcher::ExecuteBypass();
            std::cout << "[SUCCESS] Applications successfully patched with GenP-V4 technology." << std::endl;
        }
    } else {
        std::cout << "[ERROR] Please run with Administrator privileges." << std::endl;
    }

    Sleep(3000);
    return 0;
}