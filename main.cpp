#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

//Note
/* Random number gen used

    srand(time(0));

    for (int i = 0; i < 4; i++)
        randomizedNum << rand();

    for the more limited version use

    int N = 100;
    srand(time(0));

    for (int i = 0; i < 4; i++)
        randomizedNum << rand() %N;

    for the limited implementation for cases 1 - 3 use

    int lb = 30, ub = 39; // Generates 5 nums between 30 and 39
    srand(time(0));

    for (int i = 0; i < 5; i++)
        randomizedNum << (rand() % (ub - lb + 1)) + lb;

 */



//Password Generator

int main() {
    int passwordStr;
    int randomizedNum = 0;
    string randomizedNumS;
    char password1 [8];
    char password2 [16];
    char password3 [32];
    char password4 [16];
    char password5 [32];
    string ignore_;

    //Displays warning on execution
    cout << "/!\\ Warning /!\\ Not all sites accept the extended unicode library"
         << "\n So be warned that options 4 and 5 may not be accepted"
         << "\n Hit \"Enter\" to continue and accept" << endl;
    cin >> ignore_;

    //Displays splash screen
    cout << "Welcome to the secure password generator!" <<
            "\nPlease input the ideal strength of your password.\n" <<
            "(1-6) 1 being weakest and 6 is uncrackable recommended 3\n>";
    cin >> passwordStr;
    int l1 = 1, u1 = 3;
    int lb1 = 48, ub1 = 57;
    int lb1a = 65, ub1a = 90;
    int lb1b = 97, ub1b = 122;
    int rb1 = 0;

    int l2 = 1, u2 = 4;
    int lb2c = 33, ub2c = 126;
    int rb2 = 0;

    //33  - 126
    //161 - 255

    int l5 = 1, u5 = 2;
    int lb5a = 33, ub5a = 126;
    int lb5b = 161, ub5b = 255;
    int rb5 = 0;

    switch (passwordStr) {
        case 1: //Digit len 8, uses num, upper and lower.
            /*  ----- UNICODE CHARS USED -----
             *  Nums: U+0030 - U+0039 || /48 - /57
             *  CHAR: U+0041 - U+005A || /65 - /90  - (Upper case)
             *  char: U+0061 - U+007A || /97 - /122 - (Lower case)
             */

            cout << "This will take 16000ms or 16s due to the srand(time(0)) not having time to change"
                 << "\n and 2000ms was the optimal amount of time to delay for the best results"
                 << "\n I apologise for the wait" << endl;

            for (int i = 0; i < 8; i++) {
                this_thread::sleep_for(chrono::milliseconds(2000) );
                srand(time(0));
                rb1 = (rand() % (u1 - l1 + 1)) + l1;
                //Checks what type of value the char will be
                if (rb1 == 1) {

                    //If the first randomized iteration is 1 that char will be a number

                    srand(time(0));

                    password1[i] = (rand() % (ub1 - lb1 + 1)) + lb1;

                } else if (rb1 == 2) {

                    //If the first randomized iteration is 1 that char will be a number

                    srand(time(0));

                    password1[i] = (rand() % (ub1a - lb1a + 1)) + lb1a;

                } else if (rb1 == 3) {

                    //If the first randomized iteration is 1 that char will be a number

                    srand(time(0));

                    password1[i] = (rand() % (ub1b - lb1b + 1)) + lb1b;

                } else {

                }
            }

            cout << "Your password is\n" << endl;
            cout << (char)password1[0] << (char)password1[1] << (char)password1[2]
                 << (char)password1[3] << (char)password1[4] << (char)password1[5]
                 << (char)password1[6] << (char)password1[7] << endl;

            break;
        case 2: //Digit len 16, uses num, symbols, upper, lower
            /*  ----- UNICODE CHARS USED -----
             *  Anything: U+0021 - U+007E || 33 - 126
             */

            cout << "This will take 32000ms or 32s due to the srand(time(0)) not having time to change"
                 << "\n and 2000ms was the optimal amount of time to delay for the best results"
                 << "\n I apologise for the wait" << endl;


            for (int i = 0; i < 16; i++) {
                this_thread::sleep_for(chrono::milliseconds(2000) );
                srand(time(0));
                rb2 = (rand() % (u2 - l2 + 1)) + l2;
                //Checks what type of value the char will be
                if (rb2 == 1) {

                    //If the first randomized iteration is 1 that char will be a number

                    srand(time(0));

                    password2[i] = (rand() % (ub2c - lb2c + 1)) + lb2c;

                } else if (rb2 == 2) {

                    //If the first randomized iteration is 2 that char will be an uppercase letter

                    srand(time(0));

                    password2[i] = (rand() % (ub2c - lb2c + 1)) + lb2c;

                } else if (rb2 == 3) {

                    //If the first randomized iteration is 3 that char will be a lowercase letter

                    srand(time(0));

                    password2[i] = (rand() % (ub2c - lb2c + 1)) + lb2c;

                } else if (rb2 == 4) {

                    //If the first randomized iteration is 4 that char will be a symbol

                    srand(time(0));

                    password2[i] = (rand() % (ub2c - lb2c + 1)) + lb2c;

                } else {

                }
            }

            cout << "Your password is\n" << endl;
            cout << (char)password2[0] << (char)password2[1] << (char)password2[2]
                 << (char)password2[3] << (char)password2[4] << (char)password2[5]
                 << (char)password2[6] << (char)password2[7] << (char)password2[8]
                 << (char)password2[9] << (char)password2[10] << (char)password2[11]
                 << (char)password2[12] << (char)password2[13] << (char)password2[14]
                 << (char)password2[15] << endl;


            break;
        case 3: //Digit len 32 ^^
            /*  ----- UNICODE CHARS USED -----
             *  Anything: U+0021 - U+007E || 33 - 126
             */

            break;
        case 4: //Digit len 16 ^^
            /*  ----- UNICODE CHARS USED -----
             *  Anything: U+0021 - U+007E || 33  - 126
             *  More Ind: U+00A1 - U+00FF || 161 - 255
             */

            break;
        case 5: //Digit len 32 ^^
            /*  ----- UNICODE CHARS USED -----
            *  Anything: U+0021 - U+007E || 33  - 126
            *  More Ind: U+00A1 - U+00FF || 161 - 255
            */

            for (int i = 0; i < 32; i++) {
                this_thread::sleep_for(chrono::milliseconds(2000));
                srand(time(0));
                rb5 = (rand() % (u2 - l2 + 1)) + l2;

                if(rb5 == 1) {
                    password5[i] = (rand() % (ub5a - lb5a + 1)) + lb5a;
                } else if (rb5 == 2) {
                    password2[i] = (rand() % (ub5b - lb5b + 1)) + lb5b;
                }

                if (password5[i] == ' ') {
                    i--;
                }
            }

            cout << "Your password is\n" << endl;
            cout << (char)password5[0]  << (char)password5[1]  << (char)password5[2]
                 << (char)password5[3]  << (char)password5[4]  << (char)password5[5]
                 << (char)password5[6]  << (char)password5[7]  << (char)password5[8]
                 << (char)password5[9]  << (char)password5[10] << (char)password5[11]
                 << (char)password5[12] << (char)password5[13] << (char)password5[14]
                 << (char)password5[15] << (char)password5[16] << (char)password5[17]
                 << (char)password5[18] << (char)password5[19] << (char)password5[20]
                 << (char)password5[21] << (char)password5[22] << (char)password5[23]
                 << (char)password5[24] << (char)password5[25] << (char)password5[26]
                 << (char)password5[27] << (char)password5[28] << (char)password5[29]
                 << (char)password5[30] << (char)password5[31] << endl;

            break;
        case 6:
                
            break;
    }



    return 0;
}
