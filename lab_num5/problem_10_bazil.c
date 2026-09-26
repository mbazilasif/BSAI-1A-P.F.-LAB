
// author bazil asif
#include<stdio.h>
#include<math.h>
int main()
{
	int accuracy, c_score, d_size, user_role, m_status, modlescore, view, train, test, deploy, permission, confidence, deployment;
	int modelscore;
	
	printf("Enter AI model's accuracy:");
	scanf("%d",&accuracy);
	
	printf("Enter confidence score:");
	scanf("%d",&c_score);
	
	printf("Enter dataset size:");
	scanf("%d",&d_size);
	
	printf("Enter user role User Roles (1 = Admin, 2 = Developer, 3 = Researcher):");
	scanf("%d",&user_role);
	
	printf("Enter model status: Model Status (1 = Ready, 2 = Testing, 3 = Training):");
	scanf("%d",&m_status); 
	
	printf("Enter deployment permissions:");
	scanf("%d",&permission);
	
	modelscore: (accuracy + confidence) / 2;
	
	if(permission & 1)
		view = 1;
	if(permission & 2)
		train = 1;
	if(permission & 4)
		test = 1;
	if(permission & 8)
		deploy = 1;
		
	if (accuracy >= 80 && confidence >= 75 && d_size >= 1000 && m_status == 1 && deploy == 1)
	{
		deployment = 1;
	}
	//end if
	
	modelscore = (accuracy + confidence) / 2;
	
	
	printf("\nAI MODEL INFORMATION \n\n");
	
	printf("The AI model's accuracy is %d%%\n", accuracy);
	printf("The confidence score of model is %d%%\n", c_score);
	printf("The dataset size is %d\n", d_size);
	printf("The model score is %d\n", modelscore);
	
	if (user_role == 1)
		printf("The user role is Admin\n");
	
	else if (user_role == 2)
		printf("The user role is Developer\n");
	
	else if (user_role == 3)
		printf("The user role is Researcher\n");
	
	else
		printf("Invalid user role\n");
	
	if (m_status == 1)
		printf("The model status is Ready\n");
	
	else if (m_status == 2)
		printf("The model status is Testing\n");
	
	else if (m_status == 3)
		printf("The model status is Training\n");
	
	else
		printf("Invalid model status\n");
	
	printf("View permission: %s\n",   view   ?   "Granted" : "Denied");
	printf("Train permission: %s\n",  train  ?  "Granted" : "Denied");
	printf("Test permission: %s\n",   test   ?   "Granted" : "Denied");
	printf("Deploy permission: %s\n", deploy ? "Granted" : "Denied");
	
	if (deployment == 1)
		printf("\nThe model is READY FOR DEPLOYMENT\n");
	else
		printf("\nThe model is NOT READY FOR DEPLOYMENT\n");
	
}//end main