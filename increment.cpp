#include<iostream>
using namespace std;

void checkIncrement(int* years, bool* researchDone, bool* newProject, double* profit, double* salary) {
    int conditionsMet = 0;

    if (*years >= 1) conditionsMet++;
    if (*researchDone) conditionsMet++;
    if (*newProject) conditionsMet++;
    if (*profit > 100000) conditionsMet++;

    if (conditionsMet >= 3) {
        *salary += (*salary * 0.20);
        cout <<"\nEligible for increment.\nUpdated Salary: " << *salary << endl;
    } else {
        cout <<"\nNot eligible for increment.\nSalary remains: " << *salary << endl;
    }
}

int main() {
    int yearsCompleted;
    bool hasResearchProjects, hasNewProjectPipeline;
    double profitGenerated, currentSalary;

    cout<<"Enter years completed\n";
    cin>>yearsCompleted;

    cout<<"Worked on Research Projects? (1: Yes, 0: No)\n";
    cin>>hasResearchProjects;

    cout<<"New Research Project in Pipeline? (1: Yes, 0: No)\n";
    cin>>hasNewProjectPipeline;

    cout <<"Profit generated: Rs ";
    cin >> profitGenerated;

    cout <<"\nCurrent salary: Rs ";
    cin >> currentSalary;

    checkIncrement(&yearsCompleted, &hasResearchProjects, &hasNewProjectPipeline, &profitGenerated, &currentSalary);

    return 0;
}

/*
Enter years completed
5
Worked on Research Projects? (1: Yes, 0: No)
1
New Research Project in Pipeline? (1: Yes, 0: No)
0
Profit generated: Rs 10000

Current salary: Rs 100000

Not eligible for increment.
Salary remains: 100000


*/
