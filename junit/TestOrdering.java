import static org.junit.Assert.*;
import org.junit.Test;

public class TestOrdering {

	Ordering order = new Ordering();
  
  @Test
  public void test1_HelloWorld() {
    assertEquals(" !,HWdellloor", order.orderWord("Hello, World!"));
  }
  
  @Test
  public void test2_onlybigletters() {
    assertEquals("ADIOQSUV", order.orderWord("QUOVADIS"));
  }

  @Test
  public void test3_onlyspaces() {
    assertEquals("     ", order.orderWord("     "));
  }

  @Test
  public void test4_completesolution1() {
    assertEquals(" aadeehhnpptw", order.orderWord("what happened"));
  }

  @Test
  public void test5_completesolution2() {
    assertEquals("FINORTaimno", order.orderWord("InFORmaTioN"));
  }
  
  @Test
  public void test6_completesolution3() {
    assertEquals("aaeiinorwzz", order.orderWord("rozwiazanie"));
  }
  
  @Test
  public void test7_nonletters() {
    assertEquals("!\"#$%&(*@[]^", order.orderWord("\"][@!#$*(^&%"));
  }
  
  @Test
  public void test8_lettersandnot() {
    assertEquals("!\"#$%&(@[]^addilorrwz", order.orderWord("i\"d][@z!#$r(^a&world%"));
  }
  
  @Test
  public void test9_null() {
    assertEquals("Invalid String!", order.orderWord(null));
  }
  @Test
  public void test10_empty(){
    assertEquals("Invalid String!", order.orderWord(""));
  }
}
