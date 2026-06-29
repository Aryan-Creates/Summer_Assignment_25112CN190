//WAP to Develop complete mini project using arrays, strings and functions.

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct User
{
    string name;
    int age;
};

User user;

int overallScore = 0;
int passwordScore = 0;
int phishingScore = 0;
int quizScore = 0;

string passwordStrength = "Not Tested";

// Function Prototypes
void registerUser();
void passwordChecker();
void generatePassword();
void phishingDetector();
void cyberQuiz();
void securityReport();

int main()
{
    srand(time(0));
    int choice;

    do
    {
        cout << "\n===================================================";
        cout << "\n      CYBER SECURITY TRAINING SIMULATOR";
        cout << "\n===================================================";
        cout << "\n1. Register User";
        cout << "\n2. Password Strength Checker";
        cout << "\n3. Generate Strong Password";
        cout << "\n4. Phishing Email Detector";
        cout << "\n5. Cyber Security Quiz";
        cout << "\n6. Security Report";
        cout << "\n7. Exit";
        cout << "\n===================================================";
        cout << "\nEnter Choice : ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1:
                registerUser();
                break;

            case 2:
                passwordChecker();
                break;

            case 3:
                generatePassword();
                break;

            case 4:
                phishingDetector();
                break;

            case 5:
                cyberQuiz();
                break;

            case 6:
                securityReport();
                break;

            case 7:
                cout << "\nThank You For Using The Simulator.\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }
    }
    while(choice!=7);
    return 0;
}

// Function to Register User
void registerUser()
{
    cout << "\n========== USER REGISTRATION ==========\n";

    cout << "Enter Name : ";
    getline(cin, user.name);

    cout << "Enter Age : ";
    cin >> user.age;
    cin.ignore();

    cout << "\nRegistration Successful!\n";
}

// Function to Check Password Strength
void passwordChecker()
{
    string password;

    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool special = false;

    int score = 0;

    cout << "\n========== PASSWORD STRENGTH CHECKER ==========\n";

    cout << "Enter Password : ";
    getline(cin, password);

    // Check Length
    if(password.length() >= 8)
        score++;

    // Check Characters
    for(int i = 0; i < password.length(); i++)
    {
        char ch = password[i];

        if(ch >= 'A' && ch <= 'Z')
            upper = true;

        else if(ch >= 'a' && ch <= 'z')
            lower = true;

        else if(ch >= '0' && ch <= '9')
            digit = true;

        else
            special = true;
    }

    if(upper) score++;
    if(lower) score++;
    if(digit) score++;
    if(special) score++;

    cout << "\nPassword Analysis";
    cout << "\n--------------------------";

    cout << "\nLength >= 8      : ";
    if(password.length() >= 8)
        cout << "Yes";
    else
        cout << "No";

    cout << "\nUppercase Letter : ";
    if(upper)
        cout << "Yes";
    else
        cout << "No";

    cout << "\nLowercase Letter : ";
    if(lower)
        cout << "Yes";
    else
        cout << "No";

    cout << "\nDigit            : ";
    if(digit)
        cout << "Yes";
    else
        cout << "No";

    cout << "\nSpecial Symbol   : ";
    if(special)
        cout << "Yes";
    else
        cout << "No";

    cout << "\n";

    if(score <= 2)
    {
        passwordStrength = "WEAK";
        passwordScore = 10;
    }
    else if(score <= 4)
    {
        passwordStrength = "MEDIUM";
        passwordScore = 20;
    }
    else
    {
        passwordStrength = "STRONG";
        passwordScore = 30;
    }

    overallScore = passwordScore + phishingScore + quizScore;

    cout << "\nPassword Strength : " << passwordStrength << endl;
    cout << "Score Earned      : " << passwordScore << "/30\n";

    if(passwordStrength == "WEAK")
    {
        cout << "\nSuggestion:";
        cout << "\n- Use at least 8 characters";
        cout << "\n- Include uppercase letters";
        cout << "\n- Include lowercase letters";
        cout << "\n- Include numbers";
        cout << "\n- Include special symbols\n";
    }
}

// Function to Generate Strong Password
void generatePassword()
{
    string passwords[10] =
    {
        "A9@xP2#m",
        "Q7$Lm9!K",
        "T1@zX8#p",
        "M5&nR2@W",
        "Z8*Qa4$L",
        "P3!Ty7@H",
        "X9#Vm5$N",
        "R2@Ks8!F",
        "J6$Lp1@Q",
        "H4#Wx9!T"
    };

    int choice;

    cout << "\n========== STRONG PASSWORD GENERATOR ==========\n";

    cout << "\n1. Generate One Password";
    cout << "\n2. Show All Strong Passwords";
    cout << "\nEnter Choice : ";
    cin >> choice;

    if(choice == 1)
    {
        int randomIndex = rand() % 10;

        cout << "\nSuggested Strong Password : "<< passwords[randomIndex] << endl;

        cout << "\nWhy is it Strong?\n";
        cout << "- Contains Uppercase Letters\n";
        cout << "- Contains Lowercase Letters\n";
        cout << "- Contains Numbers\n";
        cout << "- Contains Special Symbols\n";
        cout << "- Length is 8 Characters\n";
    }
    else if(choice == 2)
    {
        cout << "\nRecommended Passwords\n";
        cout << "-----------------------------\n";

        for(int i = 0; i < 10; i++)
        {
            cout << i + 1 << ". "<< passwords[i] << endl;
        }
    }
    else
    {
        cout << "\nInvalid Choice.\n";
    }
}

// Function to Detect Phishing Email
void phishingDetector()
{
    string emails[5] =
    {
        "Congratulations! You have won Rs.50,000. Click here immediately: http://free-money.xyz",
        "Your bank account has been suspended. Verify now at http://secure-bank-login.xyz",
        "Meeting at 3 PM today in Conference Room. Regards, HR Department.",
        "Amazon Order Confirmed. Your package will arrive tomorrow.",
        "URGENT! Your Gmail password has expired. Login now at http://gmail-security-update.xyz"
    };

    bool isPhishing[5] =
    {
        true,
        true,
        false,
        false,
        true
    };

    int randomEmail = rand() % 5;

    int answer;

    cout << "\n==============================================";
    cout << "\n         PHISHING EMAIL DETECTOR";
    cout << "\n==============================================";

    cout << "\n\nEmail Received:\n\n";
    cout << emails[randomEmail] << endl;

    cout << "\n----------------------------------------------";
    cout << "\nIs this email phishing?";
    cout << "\n1. Yes";
    cout << "\n2. No";
    cout << "\nEnter Choice : ";
    cin >> answer;

    if((answer == 1 && isPhishing[randomEmail]) || (answer == 2 && !isPhishing[randomEmail]))
    {
        cout << "\nCorrect!";
        cout << "\nExcellent! You identified the email correctly.\n";

        phishingScore = 30;
    }
    else
    {
        cout << "\nIncorrect!\n";

        if(isPhishing[randomEmail])
        {
            cout << "\nWarning:";
            cout << "\nThis email contains suspicious links.";
            cout << "\nNever click unknown URLs.";
        }
        else
        {
            cout << "\nThis was actually a legitimate email.";
        }

        phishingScore = 10;
    }

    overallScore = passwordScore + phishingScore + quizScore;

    cout << "\n\nCurrent Phishing Score : "<< phishingScore<< "/30\n";
}

// Function to Conduct Cyber Security Quiz
void cyberQuiz()
{
    string questions[10] =
    {
        "1. Which of the following is the strongest password?",
        "2. What does OTP stand for?",
        "3. Which one is a phishing sign?",
        "4. Which software protects your computer from viruses?",
        "5. Which website is generally secure?",
        "6. What should you do before clicking an unknown link?",
        "7. Which one is an example of two-factor authentication?",
        "8. What should you do if you receive a suspicious email?",
        "9. Which is the safest way to store passwords?",
        "10. Which of the following is a cyber attack?"
    };

    string options[10][4] =
    {
        {"password123", "12345678", "Ab@12345", "qwerty"},
        {"One Time Password", "Only Text Password", "Online Transfer Protocol", "Open Testing Program"},
        {"Unknown sender", "Urgent message", "Suspicious link", "All of these"},
        {"MS Word", "Antivirus", "Calculator", "Paint"},
        {"http://example.com", "https://example.com", "ftp://example.com", "www.fake-site.xyz"},
        {"Click immediately", "Verify the sender", "Ignore browser warning", "Forward it to everyone"},
        {"Password only", "OTP + Password", "Username only", "PIN only"},
        {"Reply immediately", "Delete or report it", "Share with friends", "Open all attachments"},
        {"Notebook", "Browser history", "Password Manager", "Desktop Sticky Note"},
        {"Phishing", "Typing", "Printing", "Scanning"}
    };

    int correctAnswer[10] =
    {
        3,
        1,
        4,
        2,
        2,
        2,
        2,
        2,
        3,
        1
    };

    int answer;
    quizScore = 0;

    cout << "\n==============================================";
    cout << "\n          CYBER SECURITY QUIZ";
    cout << "\n==============================================";

    for(int i = 0; i < 10; i++)
    {
        cout << "\n\n" << questions[i] << endl;

        for(int j = 0; j < 4; j++)
        {
            cout << j + 1 << ". " << options[i][j] << endl;
        }

        cout << "Enter Answer (1-4): ";
        cin >> answer;

        if(answer == correctAnswer[i])
        {
            cout << "Correct!\n";
            quizScore += 10;
        }
        else
        {
            cout << "Wrong!";
            cout << " Correct Answer: "<< options[i][correctAnswer[i]-1]<< endl;
        }
    }

    overallScore = passwordScore + phishingScore + quizScore;

    cout << "\n==============================================";
    cout << "\nQuiz Completed!";
    cout << "\nYour Quiz Score : "<< quizScore<< "/100\n";
}

// Function to Display Security Report
void securityReport()
{
    overallScore = passwordScore + phishingScore + quizScore;

    cout << "\n========================================================";
    cout << "\n             CYBER SECURITY REPORT";
    cout << "\n========================================================";

    cout << "\nUser Name          : " << user.name;
    cout << "\nAge                : " << user.age;

    cout << "\n\n----------------------------------------";
    cout << "\nPassword Strength  : " << passwordStrength;
    cout << "\nPassword Score     : " << passwordScore << "/30";
    cout << "\nPhishing Score     : " << phishingScore << "/30";
    cout << "\nQuiz Score         : " << quizScore << "/100";
    cout << "\n----------------------------------------";

    cout << "\nOverall Score      : "<< overallScore<< "/160";

    cout << "\n\nSecurity Rating    : ";

    if(overallScore >= 145)
        cout << "★★★★★";
    else if(overallScore >= 120)
        cout << "★★★★";
    else if(overallScore >= 90)
        cout << "★★★";
    else if(overallScore >= 60)
        cout << "★★";
    else
        cout << "★";

    cout << "\nCyber Rank         : ";

    if(overallScore >= 145)
        cout << "Cyber Guardian";
    else if(overallScore >= 120)
        cout << "Security Analyst";
    else if(overallScore >= 90)
        cout << "Cyber Explorer";
    else if(overallScore >= 60)
        cout << "Cyber Learner";
    else
        cout << "Beginner";

    cout << "\n\nRecommendations\n";
    cout << "----------------------------------------";

    if(passwordScore < 30)
    {
        cout << "\n* Improve your password by using:";
        cout << "\n  - Uppercase letters";
        cout << "\n  - Lowercase letters";
        cout << "\n  - Numbers";
        cout << "\n  - Special symbols";
    }

    if(phishingScore < 30)
    {
        cout << "\n* Be careful before clicking unknown links.";
        cout << "\n* Verify email senders before responding.";
    }

    if(quizScore < 70)
    {
        cout << "\n* Improve your cybersecurity knowledge.";
        cout << "\n* Practice identifying cyber threats.";
    }

    if(overallScore >= 145)
    {
        cout << "\n\nExcellent!";
        cout << "\nYou have strong cybersecurity awareness.";
    }

    cout << "\n========================================================";
    cout << "\nThank You For Using";
    cout << "\nCYBER SECURITY TRAINING SIMULATOR";
    cout << "\n========================================================\n";
}