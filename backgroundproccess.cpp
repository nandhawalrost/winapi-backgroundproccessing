#include <windows.h>
#include <iostream>

int main() {
    // Get a handle to the console window
    HWND consoleWindow = GetConsoleWindow();

    // Hide the console window
    ShowWindow(consoleWindow, SW_HIDE);

    // Simulate background process behavior (e.g., printing every 5 seconds)
    while (true) {
        // Simulate background task (log, process, etc.)
        Sleep(5000);  // Sleep for n seconds
        // (No output since it's running in the background)
        int result = MessageBox(NULL, "C++ API", "Windows API Called", MB_OK);

        if (result == IDOK) {
            return 0; //exiting
        }
    }

    // return 0;

    //START NOTEPAD:
    // STARTUPINFO si;
    // PROCESS_INFORMATION pi;

    // ZeroMemory(&si, sizeof(si));
    // si.cb = sizeof(si);
    // ZeroMemory(&pi, sizeof(pi));

    // // Specify the program to run (e.g., notepad.exe)
    // const char* program = "notepad.exe"; 

    // // Start the program without a window
    // if (CreateProcess(
    //     NULL,              // No module name (use command line)
    //     (LPSTR)program,    // Command line
    //     NULL,              // Process handle not inheritable
    //     NULL,              // Thread handle not inheritable
    //     FALSE,             // Set handle inheritance to FALSE
    //     CREATE_NO_WINDOW,  // Creation flags: no window
    //     NULL,              // Use parent's environment block
    //     NULL,              // Use parent's starting directory 
    //     &si,               // Pointer to STARTUPINFO structure
    //     &pi                // Pointer to PROCESS_INFORMATION structure
    // )) {
    //     // Successfully created the background process
    //     std::cout << "Background process started!\n";
        
    //     // Wait until the background process exits
    //     WaitForSingleObject(pi.hProcess, INFINITE);
        
    //     // Close process and thread handles
    //     CloseHandle(pi.hProcess);
    //     CloseHandle(pi.hThread);
    // } else {
    //     std::cerr << "CreateProcess failed: " << GetLastError() << "\n";
    // }

    // return 0;
    //END NOTEPAD:
}
