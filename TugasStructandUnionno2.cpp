#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// untuk memfiksasi jumlah array/data dari total seluruh siswa
const int NUM_STUDENTS = 20;

// struktur general untuk setiap "students[]"
struct studentType {
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};
// Menginisialisasi Data setiap siswa
void inisialisasiData(studentType students[], int size) {
    students[0] = {"Ahmad", "Ahmad", 85};
    students[1] = {"Bobi", "Bobi", 92};
    students[2] = {"Cici", "Cici", 78};
    students[3] = {"David", "David", 64};
    students[4] = {"Ekevu", "Zende", 97};
    students[5] = {"Fahmi", "Fahmi", 88};
    students[6] = {"Gerard", "Gerard", 76};
    students[7] = {"Habibi", "Habibi", 81};
    students[8] = {"Ivan", "Ivan", 92};
    students[9] = {"James", "James", 59};
    students[10] = {"Kevin", "Kevin", 85};
    students[11] = {"Lamine", "Yamal", 73};
    students[12] = {"Muhammad", "Faisal", 97};
    students[13] = {"Nia", "Nia", 68};
    students[14] = {"Opik", "Opik", 83};
    students[15] = {"Papi", "Papi", 90};
    students[16] = {"Raffi", "Ahmad", 79};
    students[17] = {"Setya", "Novanto", 88};
    students[18] = {"Toni", "Gomez", 95};
    students[19] = {"Wahyu", "Wahyu", 70};
}
// Memberi "Grade" untuk setiap siswa dengan nilainya masing2
void assignGrade(studentType students[], int size){
    for(int i = 0; i < size; i++){
        if (students[i].testScore >= 90) {
            students[i].grade = 'A';
        } else if (students[i].testScore >= 80) {
            students[i].grade = 'B';
        } else if (students[i].testScore >= 70) {
            students[i].grade = 'C';
        } else if (students[i].testScore >= 60) {
            students[i].grade = 'D';
        } else {
            students[i].grade = 'F';
        }
    }
}
// Menentukan Nilai Tertinggi
int nilaiTertinggi(const studentType students[], int size) {
    int maxScore = students[0].testScore;
    
    for (int i = 1; i < size; i++) {
        if (students[i].testScore > maxScore) {
            maxScore = students[i].testScore;
        }
    }
    return maxScore;
}
//Menampilkan data yang sudah dinisialisasikan tadi
void printData(const studentType students[], int size) {

    cout << "Daftar Nilai Siswa" << endl;
    for (int i = 0; i < size; i++) {
        string fullName = students[i].studentFName + ", " + students[i].studentLName;
        
        cout << fullName << " "
             << students[i].testScore << " "
             << students[i].grade << endl;
    }
    cout << endl;
}
//Menampilkan siswa dengan nilai tertinggi
void printNilaiTertinggi(const studentType students[], int size, int highestScore) {
    cout << "Siswa dengan Nilai Tertinggi (" << highestScore << "):" << endl;
    for (int i = 0; i < size; i++) {
        if (students[i].testScore == highestScore) {
            cout << "  " << students[i].studentFName << ", " 
                 << students[i].studentLName << endl;
        }
    }
}
// Eksekusi Program
int main() {
    
    int highestScore;

    studentType studentList[NUM_STUDENTS];
    
    inisialisasiData(studentList, NUM_STUDENTS);
    
    assignGrade(studentList, NUM_STUDENTS);
    
    highestScore = nilaiTertinggi(studentList, NUM_STUDENTS);

    printData(studentList, NUM_STUDENTS);
    
    printNilaiTertinggi(studentList, NUM_STUDENTS, highestScore);
    
    return 0;
}















