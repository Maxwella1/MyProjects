#ifndef QUESTIONS_H
#define QUESTIONS_H

using namespace std;

void easy_answerKey();
void medium_answerKey();
void hard_answerKey();
void setParagraphs();

struct questions{
    int answer;
    string a1;
    string a2;
    string a3;
    string a4;
    string ask;
    string explain;
} question[10], mQuestion[10], hQuestion[10], paragraphs;

void setParagraphs(){
    paragraphs.a1 = "Food insecurity is an epidemic that affects 13% of the US population. That is ~41,782,000 people, and that is just the US. Food insecurity –\nnot knowing where your next meal will come from – is hunger with a new face, and a new name. In 2006 the US government changed the word\nfor hunger to food insecurity to better represent the populations of those that are hungry. New Jersey, where I live, has a food\ninsecurity rate of 10.8%, which is below the national average, but is still more than 1/10 of the population or 967,464 people in NJ. This\nis too big of a problem for people to ignore. This statistic could be as large as it is because most of these people are in a family.\nThose who don't have other people to feed only have to worry about themselves. This means that a lot of these poeple who don't have food\non a regular basis are children. The government knows this is a problem and instead of entirely helping them, they set up\nSNAP(Supplamental Nutrition Assisstance Program) who gives out food stamps to people. Nutrition is a big factor in this all, and they\ndon't get much of it. The average cost of a meal per person with food insecurity is $1.50. With this the people do not get a lot of\nnecessary nutrients, instead they get fatty oils and carbohydrates since they can store more energy for the insane working hours they are\ndoing with multiple jobs. Are people relying on welfare instead of getting jobs? Well as said above, for most of the population, no, many \nof them are working extrememly long hours to help provide for their family and for themselves and the only way to do that is work. The\nPrep food pantry, according to Mr. Dougherty, serves about 30 people each time the pantry is held. Most of these people take that food \nhome and use it to feed their families for about a week. There are even places in Mississippi, South Dakota, and Alaska that have food\ninsecurity rates of over 50%.";
    paragraphs.a2 = "According to Catholic Social Teaching, Prep is doing a decent job at helping those affected by this epidemic. Although, they could be doing\nmore to hold up the system that's in place. In 2016 Fr. Azzarto, the man who runs the lunch slips program and the peanut butter room, had\na heart attack and was out for weeks. During this period of time, nobody was able to get food or lunch slips. So, the question is what\ncould prep be doing to uphold this tradition when Fr. Azzarto is out sick or for something he is doing outside of school. The US is doing\nvirtually nothing to help people compared to what they could be doing. Life and Dignity of the Human Person tells us that every life is\nsacred and must be preserved. The goverment spent over half a billion dollars on the military in 2015. The military is a very important\nthing for our country as we are constantly under threat or attack. But, there must be something that we can cut from there that is not\nessential, we could use every needless dollar to help people who are in need of food. Food insecure has been described as \"the new face of\nhunger\" in this case, it's literal. A lot of people who are food insecure have to buy food that will give them a lot of energy. Thus, they\nhave to buy foods that are high in carbs and fats as they are very cheap to produce and give you enough energy to get through the day. Due\nto the amount of carbohydrates and fats they are consuming, a lot of food insecure people are overweight. We are the richest country in\nthe world yet, we can't even feed our own people, there are several countries in Europe that have food insecurity rates of less than 5%.";
    paragraphs.a3 = "Something that is holding Prep back from helping everyone is that they can't force people to tell them their food security status. This is one\nof the problems that prep has with making sure all of its students have a meal. This is called the culture of silence and is the largest\nthing stopping kids from speaking up about this problem. They believe that speaking out about it will only result in them being rejected\nfor seaking out for help, when the opposite has proven to be true. John Dougherty believes that one way they can more effectively use the\nfood donations they get is actually to give it to organizations that can use the food better and distribute it to a larger amount of\npeople. A solution that may help the country would be to raise the minimum wage. This may hurt the middle class in the short term, but\nwould help the country overall. Along with, allowing the impoverished to get out of this cycle of food insecurity. It can do all of this\nwhile forcing people to work so that they don't rely on welfare or the food stamps once they can support themselves. Although, of course,\nthere is much more than one solution. Once we solve the problem of food insecurity in the US, we should start solving it all around the\nglobe, as that would mean we have found a solution and we should use that to help the rest of the world. To help solve food insecurity\ninside of prep, we can either give students more options for lunch, or help solve the problem outside of prep so that things like lunch\nslips and the peanut butter room are unneccessary.";
}

void easy_answerKey(){
    question[0].ask = "Question: What is food insecurity?"; // in the paragraph
    question[0].a1 = "1. Fancy word for being hungry";
    question[0].a2 = "2. Not knowing where your next meal is coming from";
    question[0].a3 = "3. Not wanting to eat";
    question[0].a4 = "4. A social diorder that makes you not want people to know what you're eating";
    question[0].answer = 2;
    question[0].explain = "Food insecurity is the not knowing where your next meal is coming\nfrom. So, it is not necessarily being hungry, but just not having enough\nmoney for food";
    
    question[1].ask = "Question: What is the National Rate of Food Insecurity for the United States(2014)?"; // in the paragraph
    question[1].a1 = "1. 11%";
    question[1].a2 = "2. 52%";
    question[1].a3 = "3. 01%";
    question[1].a4 = "4. 13%";
    question[1].answer = 4;
    question[1].explain = "The National Average food insecurity rate is 13%!!!!!!!!\nThat doesn't seem like much but it is more than one in\nevery 8 Americans! Many countries in Europe have food insecurity rates under 5%.";
    
    question[2].ask = "Question: How many people has the Prep food pantry been serving on average this year(2016-2017)?"; // in the paragraph
    question[2].a1 = "1. ~30";
    question[2].a2 = "2. ~10";
    question[2].a3 = "3. ~50";
    question[2].a4 = "4. ~20";
    question[2].answer = 1;
    question[2].explain = "The prep food pantry, according to John Dougherty,\nhas had an average of around 30 people at each food drive.\nThis is actually less than the average of around\n50 people each time in past food drives\nMr.Dougherty believes the food could be better put to use at a proffesional food pantry";
    
    question[3].ask = "Question: When did the US government change the word from hungry to food insecure\nfor these types of people?"; // in the paragraph
    question[3].a1 = "1. 2000";
    question[3].a2 = "2. 2016";
    question[3].a3 = "3. 2006";
    question[3].a4 = "4. 2011";
    question[3].answer = 3;
    question[3].explain = "They changed the word in 2006 because they felt the word\nhungry did not accurately represent these people";
    
    question[4].ask = "Question: What is the food insecurity rate in New Jersey(2014)?"; // in the paragraph
    question[4].a1 = "1. 10.8%";
    question[4].a2 = "2. 20.2%";
    question[4].a3 = "3. 20.6%";
    question[4].a4 = "4. 5.01%";
    question[4].answer = 1;
    question[4].explain = "The food insecurity rate in NJ is 10.8%. While lower than\nother states, it has some counties that are above the nation average.";
    
    question[5].ask = "Question: True or False? Most people who are food insecure have families."; // in the paragraph
    question[5].a1 = "1. True";
    question[5].a2 = "2. False";
    question[5].answer = 1;
    question[5].explain = "Most of the people who are food insecure have a family. In many\nof these situations both parents are working insane ours and in some cases don't eat";
    
    question[6].ask = "Question: Are there kids at Prep who are food insecure?";
    question[6].a1 = "1. Yes";
    question[6].a2 = "2. No";
    question[6].answer = 1;
    question[6].explain = "Unfortunately yes, but they have many options to get lunch. These include the peanut butter\nroom or getting food slips for Fr. Azzarto";
    
    question[7].ask = "Question: What is the highest percent of food insecurity found in an area\nof the US?"; // in the paragraph
    question[7].a1 = "1. >50%";
    question[7].a2 = "2. 30.2%";
    question[7].a3 = "3. 31.8%";
    question[7].a4 = "4. 35.4%";
    question[7].answer = 1;
    question[7].explain = "Alaska, South Dakota, and Mississippi have some counties with food insecurity rates of over 50%";
    
    question[8].ask = "Question: What type of help is SNAP(Supplamental Nutrition Assistance Program)?"; // in the paragraph
    question[8].a1 = "1. They hand out welfare for those who don't have food";
    question[8].a2 = "2. A privately funded food bank company that helps people all over the globe";
    question[8].a3 = "3. They are the program that gives out Food Stamps";
    question[8].a4 = "4. They give classes to help people become aware of what food insecurity is like";
    question[8].answer = 3;
    question[8].explain = "";
    
    question[9].ask = "Question: How much does a meal cost for the average food insecure person?"; // in the paragraph
    question[9].a1 = "1. $2.00";
    question[9].a2 = "2. $1.50";
    question[9].a3 = "3. $3.50";
    question[9].a4 = "4. $4.00";
    question[9].answer = 2;
    question[9].explain = "The average cost per meal for one food insecurity person is $1.50. This\nleads to nutritional problems, which is why some people are overweight but don't eat.";
}

void medium_answerKey(){
    mQuestion[0].ask = "Question: According to Catholic Social Teaching is Prep doing enough?"; // in the paragraph
    mQuestion[0].a1 = "1. Yes";
    mQuestion[0].a2 = "2. No";
    mQuestion[0].answer = 1;
    mQuestion[0].explain = "Yes, Prep has given them many options to get food including financial support.\nAlthough, that's not the problem, the problem is that it is all being run\nby one man and these kids can't do anything when he's out of school";
    
    mQuestion[1].ask = "Question: Are people relying on welfare because they're too lazy to get a job?"; // in the paragraph
    mQuestion[1].a1 = "1. Yes";
    mQuestion[1].a2 = "2. No";
    mQuestion[1].answer = 2;
    mQuestion[1].explain = "No, they are not! Although this is a large generealization, a large majority of them\nare working their tail off to get enough money for their families and themselves.";
    
    mQuestion[2].ask = "Question: Is the US doing enough to help those in need?"; // in the paragraph
    mQuestion[2].a1 = "1. Yes";
    mQuestion[2].a2 = "2. No";
    mQuestion[2].answer = 2;
    mQuestion[2].explain = "No, they are not! The US is not doing enough, why does the richest country in the world have so many people going hungry? It is because we are putting some things as a higher priority than feeding Americans.";
    
    mQuestion[3].ask = "Question: What does Prep do for students who don't have lunch on days when Fr. Azzarto is gone?"; // in the paragraph
    mQuestion[3].a1 = "1. They hand out lunch slips, but it is difficult to get";
    mQuestion[3].a2 = "2. Run the program for him and it is a normal experience";
    mQuestion[3].a3 = "3. Warn the kids that there will be no lunch and do nothing";
    mQuestion[3].a4 = "4. Give free Lunch to everyone";
    mQuestion[3].answer = 1;
    mQuestion[3].explain = "Although Prep does a lot to help the students, when Fr. Azzarto is not around\nthe organization does nothing to help people who don't have food";
    
    mQuestion[4].ask = "Question: What is the definition for Life and Dignity of the Human Person?"; // in the paragraph
    mQuestion[4].a1 = "1. Defines the value of a Human life";
    mQuestion[4].a2 = "2. Everyone should not go hungry";
    mQuestion[4].a3 = "3. The dignity in having Human life";
    mQuestion[4].a4 = "4. Every life is sacred and all life must be preserved";
    mQuestion[4].answer = 4;
    mQuestion[4].explain = "Life and Dignity of the Human Person is defined as Every life is sacred and all life must be preserved.\nThis is very troubling when observing how many people in the country are food insecure";
    
    mQuestion[5].ask = "Question: True or false? The government spends more money feeding people then they spend on the military."; // in the paragraph
    mQuestion[5].a1 = "1. True";
    mQuestion[5].a2 = "2. False";
    mQuestion[5].answer = 2;
    mQuestion[5].explain = "The military has a much higher budget than programs like SNAP or Welfare. It\ngoes to show that our goverment doesn't have head in the right place.";
    
    mQuestion[6].ask = "Question: Which of the following is true about Prep's policies on students who don't have lunch?"; // in the paragraph
    mQuestion[6].a1 = "1. They do nothing to help their students";
    mQuestion[6].a2 = "2. They only have the option of the peanut butter room";
    mQuestion[6].a3 = "3. They have programs that set and run by Fr. Azzarto";
    mQuestion[6].a4 = "4. They only have the option of the food slips for the cafeteria";
    mQuestion[6].answer = 3;
    mQuestion[6].explain = "Fr. Azzarto runs";
    
    
    mQuestion[7].ask = "Question: Which of the following is false?"; // in the paragraph
    mQuestion[7].a1 = "1. The US could be doing more to help";
    mQuestion[7].a2 = "2. Privately run food pantries are only a temporary solution";
    mQuestion[7].a3 = "3. Food inecure people are generally very skinny and malnourished";
    mQuestion[7].a4 = "4. SNAP is an effective service";
    mQuestion[7].answer = 3;
    mQuestion[7].explain = "";
    
    mQuestion[8].ask = "Question: Why did the US Government change the word from hungry to food insecure?"; // in the paragraph
    mQuestion[8].a1 = "1. Because the word better represented the people";
    mQuestion[8].a2 = "2. Because hunger didn't capture the whole audience";
    mQuestion[8].a3 = "3. Because they wanted to";
    mQuestion[8].a4 = "4. Both 1 & 2";
    mQuestion[8].answer = 4;
    mQuestion[8].explain = "The US changed the word cause there weren't many people dying from starvation in the US.\nIt seemed to be an unsolvable problem from third world coutnries. This change\nbrought in a lot of new attention and showed how many people were hungry, not just those who\ndied because of it";
    
    
    mQuestion[9].ask = "Question: Are there any countries in Europe with a lower food insecurity rate than the US?";
    mQuestion[9].a1 = "1. Yes";
    mQuestion[9].a2 = "2. No";
    mQuestion[9].answer = 1;
    mQuestion[9].explain = "There are many countries in Europe that have food insecurity rates of < 5%. This is amazing,\nconsidering the rate for the US while being a very wealthy country, it still can't figure out how to help its citizens.";
    
}

void hard_answerKey(){

    hQuestion[0].ask = "Question: What is one of the problems holding prep back from helping students?"; // in the paragraph
    hQuestion[0].a1 = "1. Kids have to admit they have a problem";
    hQuestion[0].a2 = "2. Not having programs in place";
    hQuestion[0].a3 = "3. Being ignorant to the problem";
    hQuestion[0].a4 = "4. All of the above";
    hQuestion[0].answer = 1;
    hQuestion[0].explain = "Many studies have shown that students, and just children in general, do not like admitting that they have a problem\nthe problem with this is that they don't seek out help so most days they go hungry.";
    
    hQuestion[1].ask = "Question: True or False? There is only one possible solution to the problem.";// in the paragraph
    hQuestion[1].a1 = "1. True";
    hQuestion[1].a2 = "2. False";
    hQuestion[1].answer = 2;
    hQuestion[1].explain = "There is not one more than answer what so ever. The only problem is which solution works the best";
    
    hQuestion[2].ask = "Question: What is the largest thing stopping kids from speaking up to get a lunch from the school?"; // in the paragraph
    hQuestion[2].a1 = "1. Homosocial Experience";
    hQuestion[2].a2 = "2. Culture of silence";
    hQuestion[2].a3 = "3. Man box";
    hQuestion[2].answer = 2;
    hQuestion[2].explain = "The culture of silence is the leading role in kids not speaking up.";
    
    hQuestion[3].ask = "Question: Why would raising the minimum wage be good a solution?"; // in the paragraph
    hQuestion[3].a1 = "1. Because than the government would collect more taxes to help feed the poor";
    hQuestion[3].a2 = "2. Because the middle class would suffer";
    hQuestion[3].a3 = "3. People would be happier with more money making them not notice their hungry stomachs as much";
    hQuestion[3].a4 = "4. People don't make enough below the poverty line to be able to feed an entire family";
    hQuestion[3].answer = 4;
    hQuestion[3].explain = "People just do not make enough to be able to feed a family below the poverty\nline. Especially, when they still have to pay taxes and spend money on necessity";
    
    hQuestion[4].ask = "Question: Is prep doing enough to help their students?"; // in the paragraph
    hQuestion[4].a1 = "1. Yes";
    hQuestion[4].a2 = "2. No";
    hQuestion[4].answer = 1;
    hQuestion[4].explain = "Yes, I believe that they are. If you look at everything they are doing, it is clearly a matter of the\nstudents being too scared or embarrassed to speak up";
    
    hQuestion[5].ask = "Question: Is the food pantry the most effective way for Prep to use their donations?"; // in the paragraph
    hQuestion[5].a1 = "1. Yes";
    hQuestion[5].a2 = "2. No";
    hQuestion[5].answer = 2;
    hQuestion[5].explain = "No, they do not get enough people coming into the pantry for it to be an effective system.\nMr. Dougherty stated that he is trying to shut down our food pantry and instead, donate\nthe food to organizations who can use the food to best help our community.";
    
    hQuestion[6].ask = "Question: Should Prep release the name of the students who are food insecure so that others know?";
    hQuestion[6].a1 = "1. Yes";
    hQuestion[6].a2 = "2. No";
    hQuestion[6].answer = 2;
    hQuestion[6].explain = "ABSOLUTELY NOT, the opposite should be done, they should make the program more private,\nwhile telling kids who need financial aid about it so that kids aren't scared to get help\nin fear of being embarrassed. This one was not explicitly in the review, but if you got\nthis wrong I'm ashamed in my teaching skills";
    
    hQuestion[7].ask = "Question: Once we solve food insecurity in the US, what next?"; // in the paragraph
    hQuestion[7].a1 = "1. Find healthier foods for cheaper";
    hQuestion[7].a2 = "2. Get the word out about the issue to the world";
    hQuestion[7].a3 = "3. Start helping people in other countries";
    hQuestion[7].a4 = "4. All of the above";
    hQuestion[7].answer = 4;
    hQuestion[7].explain = "Finding healthier foods for a cheaper price is key, people who are affected by not\nhaving enough food due to financial problems can't afford to buy all natural, organic foods.\nDue to this the people are very malnourished. Getting the word out about the problem is\nalso very important, as then the problem can be solved around the world.";
    
    hQuestion[8].ask = "Question: How many people in the US are food insecure?"; // in the paragraph
    hQuestion[8].a1 = "1. ~41,782,000";
    hQuestion[8].a2 = "2. ~52,835,000";
    hQuestion[8].a3 = "3. ~63,548,000";
    hQuestion[8].a4 = "4. ~25,932,000";
    hQuestion[8].answer = 1;
    hQuestion[8].explain = "41,782,000 people in the US are food insecure. If you were paying attention earlier,\nyou would have known that 13% of the US population is food insecure.";
    
    hQuestion[9].ask = "Question: How do we solve food insecurity inside prep?";
    hQuestion[9].a1 = "1. We have to solve it outside of prep";
    hQuestion[9].a2 = "2. More options";
    hQuestion[9].a3 = "3. Either of these";
    hQuestion[9].answer = 1;
    hQuestion[9].explain = "Both of those answers would work, We need options to get food for those who don't have lunch\nbesides getting a slip, we have to encourage those who don't have lunch to get\nhelp from the school.";
    
    
}

#endif
