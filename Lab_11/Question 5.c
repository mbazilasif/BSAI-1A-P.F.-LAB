#include <stdio.h>

struct HospitalRecord
{
    int RecordID;
    char Ward[30];

    struct PatientInfo
    {
        int PatientID;
        char PatientName[50];
        int Age;
    } patientInfo;
};

int main()
{
    struct HospitalRecord record1 = {
        501,
        "Emergency Ward",
        {1001, "Ali Ahmed", 35}
    };

    struct HospitalRecord *ptr = &record1;

    printf("Hospital Record\n");
    printf("Record ID: %d\n", ptr->RecordID);
    printf("Ward: %s\n", ptr->Ward);
    printf("Patient ID: %d\n", ptr->patientInfo.PatientID);
    printf("Patient Name: %s\n", ptr->patientInfo.PatientName);
    printf("Patient Age: %d\n", ptr->patientInfo.Age);

    return 0;
}
