/*Quiz: The quiz program, running on command line should have at least following features: creation of a question bank, various types of questions: multiple choice (any no. of choices), multiple correct answers, numerical answer questions, match-the-pair;  Selecting questions from question bank for  a quiz; storing a quiz, restoring a quiz, storing a running quiz session, restoring a running quiz-session; exporting the entire question bank, importing the question bank; categorizing questions in question bank.*/

scoreofquiz(no of correct que,total no of que){
	//a/c to the count and the correct ans this function will cal the score and display to the user //
	double score;	
	score=(no of correct que)/(total no of que)*100;
	return score;
}
numericalans(){
	//this function will check if it is the correct integer and a/c change the count //
}
mcq(){
	//this function will check if it is correct choice and a/c change the count //
}
muilticorrectans(){
	//this function will check weather all the correct choices are selected and a/c change the count //	
}
matchthepair(){
	//this function will check weather the paires are correct and a/c change the count //
}
sorting(){
	// this will sort the alphabetically //
}
restore(){
	//restore the users quiz//
}
store(){
	//store the users quiz //
}
categorize(){
	//if user wants to answer only mcq / match the pair /multi correct /etc the my programme will  ony print those types// 
}
import(){
	//user can resume his conitnue quiz //
}
export(){
	//user can continue his old quiz//
}
selquebank(){
	//i will have to create quetion banks a,b,c,d,e,f,g,h,i,j,k,l and the user will get to choose the que bank//
}

