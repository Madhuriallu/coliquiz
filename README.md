# coliquiz
this is command line quiz using xml files.
//////////////////////i'm looking for following features in my quiz/////////////////
features:Creating Questions for a Quiz

After a trainer has created a quiz activity, they may click on the edit tab of the quiz.

Adding quiz question categories

Click the quiz link from the course page to open the'Editing Quiz' pageClick 'Categories'Select where you would like you category to sitEnter a category nameEnter a category description if requiredClick 'Add category'Your category is set, click 'Quiz' to add questions to your quiz.

Adding questions

Click 'Questions' to access the 'Question Bank' pageFrom the 'Category' drop-down menu, select a category you want to add a question toQuestions already in the category are displayedSelect the question type you want to create from the 'Create new question' drop-down menuFill in the form for the question type you are creating. Each question type has its own form and has its own options, Click 'Save Changes' to save the question.

Adding question to your quiz

Adding multiple questions to your quiz:

Click 'Quiz' to add questions from a question bank to your quizSelect the category from the 'Category' dropdown boxQuestion in the category are displayed, click the checkbox to selectClick 'Add to quiz'.

Adding single questions to your quiz:

Click 'Quiz' to add questions from a question bank to your quizSelect the category from the 'Category' dropdown boxClick the chevron << to add a single question to your quiz.

Adding random questions from a category:

A random question places a link that selects a unique question at random from a specific question category. Random questions are selected when the quiz is generated for a specific learner attempt.

This means that different learners are likely to get a different selection of questions when they attempt this quiz. For example, when a quiz has 10 random questions that draw on a question category with 30 questions. If a quiz allows multiple attempts for each student then each attempt will also contain a new selection of questions.

The grade for the randomly chosen question will be rescaled so that the maximum grade is what you have chosen as the grade for the random question.

Click 'Quiz' to add questions from a question bank to your quizSelect the category from the 'Category' dropdown boxClick 'Select All' (or click the checkbox to select the questions)Select the number of random questions you wish to addClick 'Add'.

Question Types

Calculated

Calculated questions offer a way to create individual numerical questions by the use of wildcards (i.e {x} , {y}) that are substituted with random values when the quiz is taken.

For example, if you want to create a large number of "Calculate the area of a rectangle" problems to drill your students, you could create a question with two wildcards (i.e. {base}, {height}) and put in the "Correct Answer Formula=" input field {base} * {height} ( * being the multiplication sign ).

1Select 'Calculated' from the 'Create new question' dropdown menu

2Select the category

3Any shared wildcards for this category are listed beneath. If you change category, you'll need to click the "Update the category" button to refresh this list. There may not be any shared wildcards yet - if not, you can create them later if you wish.

4Enter a question name, this is used to identify the question later

5Create the question text

6Enter the 'Default grade'

7Set the 'Penalty factor'

8Add 'General Feedback', if required, general feedback displays regardless of the learner giving the correct or incorrect response

9Add the formula for the answer, this formula must contain at least the wildcards that appear in the question text

10Set the grade for the answer

11Set the acceptable  tolerance for error

12Set the tolerance type

Note: The tolerance and tolerance type settings combine to give a range of acceptable scores. So, if tolerance = t, correct answer = x and the difference between the user's answer and the correct answer is dx, then the tolerance types are as follows:

Nominal - mark correct if dx <= t

Relative - mark correct if dx / x <= t

Geometric - mark correct if dx² / x² <= t²

13The next 2 settings, 'Correct answer shows' and 'Format' determine the precision of the answer, use these to select the number of decimal places or significant figures you want to use

14You can specify as many answer formulae as you like - click 'Add another answer blank' to add more

15You can also specify units for the answers. For example, if you enter a unit of 'cm' here, and the accepted answer is 15, then the answers '15cm' and '15' are both accepted as correct

16Click 'Next page' to save what you've done and move on.

Correct answer formula syntax

DO NOT PUT THE = sign in the formula.

As a general rule, write these formulas like you would in a calculator e.g. 3 + 5 * sin(3/{x}) A notable exception is exponentiation, where x3 cannot be entered as {x}^3, but instead should be entered as pow({x}, 3).

Each function's placeholders and other arguments should be in parentheses (brackets). For example, if you want learner to calculate the sine of one angle and two times cosine of another, you would enter sin({a}) + cos({b}*2).

It's usually better to have too many parentheses (brackets) than too few. The server won't care, and the more specific you are about what you mean, the more likely it will like your complex formulas.

There is no implicit multiplication. To you, the human editor, "5(23)" or "5x" may seem perfectly obvious. To the server doing the math, it's crazy talk and won't be understood. Always use the "*" for multiplication.

Any special mathematical function must have parentheses around its values. Take the sine function in the first bullet point for instance. Notice that the 3 / x is wrapped in parentheses (brackets)--this is so the server can understand it properly. Without those parentheses, the server won't know if you mean "(sin 3) / x" or "sin (3 / x)" and will reject the entire formula accordingly.

Description

A Description question page simply shows some text (and possibly graphics) without requiring an answer. It is more of a label than a question type.

Select 'Multiple-choice' from the 'Create new question' dropdown menuEnter a description name, this is used to identify the question laterEnter the description textClick 'Save changes'.

Essay

An essay question is a free-response text area where learners can enter larger blocks of text in response to your question. These questions are not scored by the system and you require manual grading.

Select 'Essay' from the 'Create new question' dropdown menuEnter a question name, this is used to identify the question laterCreate the question textEnter the 'Default grade'Set the 'Penalty factor'Add 'General Feedback', if required, general feedback displays regardless of the learner giving the correct or incorrect responseAdd specific feedback, if requiredClick 'Save changes'.

Matching

Matching questions ask the  learner to match multiple question stems to multiple possible answers.

Select 'Matching' from the 'Create new question' dropdown menuEnter a question name, this is used to identify the question laterCreate the question textEnter the 'Default grade'Set the 'Penalty factor'Add 'General Feedback', if required, general feedback displays regardless of the learner giving the correct or incorrect responseEnter your answers, you must provide at least two questions and three answers. You can provide extra wrong answers by giving an answer with a blank questionClick 'Save changes'.

Embedded answer (Cloze)

Embedded answers (Cloze) questions consist of a passage of text that has various answers embedded within it, including multiple choice, short answers and numerical answers.

Select 'Embedded answer (Cloze)' from the 'Create new question' dropdown menuSelect the question categoryEnter a question name, this is used to identify the question laterEnter the passage of text into the 'question text' field, see Question text format to learn moreEnter the 'Default grade'Set the 'Penalty factor'Add 'General Feedback', if required, general feedback displays regardless of the learner giving the correct or incorrect responseThe editor has been modified and allows you to test if your syntax is good. The different questions elements decoded are displayed and syntax errors pinpoint, click 'Decode and verify the question text'Click 'Save changes'.

Question Text Format

Questions consist of a passage of text (in Totara format) that has various sub-questions embedded within it, including

short answers (SHORTANSWER or SA or MW), case is unimportant,short answers (SHORTANSWER_C or SAC or MWC), case must match,numerical answers (NUMERICAL or NM),multiple choice (MULTICHOICE or MC), represented as a dropdown menu in-line in the textmultiple choice (MULTICHOICE_V or MCV), represented a vertical column of radio buttons, ormultiple choice (MULTICHOICE_H or MCH), represented as a horizontal row of radio-buttons.

Note: Be careful when copying a cloze type question into the WYSIWYG HTML editor, as line breaks tend to get added, which destroys the question.

If the correct answer contains } # ~ / " or \ you will have to escape them by putting a \ in front of each such character. The { shouldn't be escaped, this can be vital in getting TeX expressions to work. In the feedback ~ and } must be escaped otherwise it will be interpreted as the next answer or end of the short answer section respectively. Quotation signs: " can lead to trouble anyhow in both places. Use the HTML entity: & quot; (without the space between & and quot;). If you want to have Mathematical symbols there can be problems with the \ used in TeX expressions. One alternative can be to use unicode characters.

Multiple-choice

There are two types of multiple choice questions - single answer and multiple answer.

Select 'Multiple-choice' from the 'Create new question' dropdown menuEnter a question name, this is used to identify the question laterCreate the question textEnter the 'Default grade'Set the

