import java.util.Arrays;
public class Ordering {
	public static String orderWord(String sentence){
		if(sentence == null || sentence.equals(""))
		   	return "Invalid String!";
		
		char[] dividedSentence = sentence.toCharArray();
		Arrays.sort(dividedSentence);
		return String.valueOf(dividedSentence);
	}
}
