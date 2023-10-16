/// \file
#include "Smart_calc.h"
// #include "main.c"

#define STACK_OVERFLOW 256

///
/// \brief void push creates a list for an entity for stack, allocating memory
/// \brief entity created has head, value, priority and type
/**
 * @brief
 *
 * @param head
 * @param value
 * @param priority
 * @param type_p
 */
void push(Nn **head, double value, int priority, int type_p) {
  Nn *tmp = malloc(sizeof(Nn));
  if (tmp == NULL) {
    exit(STACK_OVERFLOW);
  }
  tmp->priority = priority;
  tmp->type_p = type_p;
  tmp->value = value;
  tmp->next = *head;
  *head = tmp;
}

/// \brief  parses  an incoming string "str" and
/// \brief puts its entities  into stack A
///
/**
 * @brief
 *
 * @param str
 * @param A
 * @param x_number  \brief is case there is an 'x'value in the equation
 */

void parse(char *str, Nn **A, double x_number) {
  int i = 0;
  int len = strlen(&str[i]);
  for (i = 0; i < len; i++) {
    if (str[i] == '(') {
      push(A, 0, 0, bracket_open);
    } else if (str[i] == ')') {
      push(A, 0, 0, bracket_close);
    } else if (str[i] == '+') {
      if (i == 0 || str[i - 1] == '(') {
        push(A, 0, 0, num);
      }
      push(A, 0, 1, plus);
    } else if (str[i] == '-') {
      if (i == 0 || str[i - 1] == '(') {
        push(A, 0, 0, num);
      }
      push(A, 0, 1, minus);
    } else if (str[i] == '*') {
      push(A, 0, 2, mult);
    } else if (str[i] == '/') {
      push(A, 0, 2, divide);
    } else if (str[i] == '^') {
      push(A, 0, 4, power);
    } else if (str[i] == '.') {
      push(A, 0, 0, dot);
    }
    // else if (str[i] == ',') {
    //     push(A, 0, 0, comma);
    // }
    else if (str[i] == 'm' && str[i + 1] == 'o' && str[i + 2] == 'd') {
      push(A, 0, 2, mod_div);
      i += 2;
    } else if (str[i] == 's' && str[i + 1] == 'i' && str[i + 2] == 'n') {
      push(A, 0, 3, sinus);
      i += 2;
    } else if (str[i] == 'c' && str[i + 1] == 'o' && str[i + 2] == 's') {
      push(A, 0, 3, cosinus);
      i += 2;
    } else if (str[i] == 'a' && str[i + 1] == 's' && str[i + 2] == 'i' &&
               str[i + 3] == 'n') {
      push(A, 0, 3, asinus);
      i += 3;
    } else if (str[i] == 'a' && str[i + 1] == 'c' && str[i + 2] == 'o' &&
               str[i + 3] == 's') {
      push(A, 0, 3, acosinus);
      i += 3;
    } else if (str[i] == 't' && str[i + 1] == 'a' && str[i + 2] == 'n') {
      push(A, 0, 3, tangence);
      i += 2;
    } else if (str[i] == 'a' && str[i + 1] == 't' && str[i + 2] == 'a' &&
               str[i + 3] == 'n') {
      push(A, 0, 3, atangence);
      i += 3;
    } else if (str[i] == 's' && str[i + 1] == 'q' && str[i + 2] == 'r' &&
               str[i + 3] == 't') {
      push(A, 0, 3, sqrt_user);
      i += 3;
    } else if (str[i] == 'l' && str[i + 1] == 'n') {
      push(A, 0, 3, ln_user);
      i += 1;
    } else if (str[i] == 'l' && str[i + 1] == 'o' && str[i + 2] == 'g') {
      push(A, 0, 3, log_user);
      i += 2;
    } else if (str[i] == 'x' || (str[i] >= '0' && str[i] <= '9')) {
      if (str[i] == 'x') {
        push(A, x_number, 0, num);
      } else {
        char buffer[255] = {0};
        int k = 0;
        while (isdigit(str[i + k]) || str[i + k] == '.') {
          buffer[k] = str[i + k];
          k++;
        }
        double temp_2 = atof(buffer);
        push(A, temp_2, 0, num);
        i = i + k - 1;
      }
    }
  }
}
/// \brief checks an incoming string char "str"
/// \return returns '1' if  the char is an operator and '0' if not
///
/**
 * @brief
 * @param str
 */
int operator_u(char *str) {
  int result;
  int i = 0;
  if (str[i] == '-' || str[i] == '+' || str[i] == '/' || str[i] == '*' ||
      str[i] == '^' ||
      (str[i] == 'm' &&
       str[i + 2] == 'd')) {  //|| (str[i] == 'm' && str[i+2] == 'd')
    result = OK;
    str++;
  } else {
    result = FALSE;
  }
  return result;
}
/// \brief checks an incoming string char "str"
/// \return returns '1' if  the char is a number and '0' if not
///
/**
 * @brief
 * @param str
 */
int number_1(char *str) {
  int result;
  int i = 0;
  int res = isdigit(str[i]);
  if (res != 0) {
    result = OK;
    str++;
  } else {
    result = FALSE;
  }
  return result;
}
/// \brief checks an incoming string char "str"
/// \return returns '1' if  the paranthesis in a string match and used correctly
/// and '0' if not
///
/**
 * @brief
 * @param str
 */
int brackets_norm(char *str) {
  int result = OK;
  int c1 = 0;
  unsigned long len = strlen(str);
  for (unsigned long i = 0; i < len; i++) {
    switch (str[i]) {
      case '(':
        c1++;
        break;
      case ')':
        c1--;
        if (c1 < 0) result = FALSE;
        break;
    }
  }
  if (c1 == 0 && result == OK) {
    result = OK;
  } else {
    result = FALSE;
  }
  return result;
}
/// \brief checks an incoming string char "str"
/// \return returns '1' if  the char is a single operator and '0' if not
///
/**
 * @brief
 * @param str
 */
int check_op_single(char *str) {
  int result = OK;
  unsigned long len = strlen(str);
  unsigned long op = 0;
  for (op = 0; op < len; op++) {
    if (operator_u(&str[op]) && operator_u(&str[op + 1])) {
      result = FALSE;
    }
  }
  return result;
}

/// \brief  Polish notations checks a string and sorts its entities according to
/// \brief  the shunting yard algorithm
/// \return  returns the final stack-queue for calculation according to the
/// shunting yard algorithm \return and OK if the result is successful -  FALSE
/// if not
///
/**
 * @brief
 * @param string
 * @param OutputQueue
 * @param x_number
 */

int polish_notation(char *string, Nn **OutputQueue, double x_number) {
  Nn *tmp = NULL;
  Nn *Input = NULL;
  Nn *OperatorStack = NULL;
  int result = OK;
  int parse_permitted = validated(string);
  if (parse_permitted == 0) {
    printf("Please check your input\n");
    result = FALSE;
    //        exit (EXIT_FAILURE);
  } else {
    result = OK;
    parse(string, &tmp, x_number);
  }
  // printStack(tmp);
  reverse(&tmp, &Input);
  ////////////// print after reverse
  // printStack(Input);
  while (Input != NULL) {
    if (Input->type_p == num) {
      push(OutputQueue, Input->value, Input->priority, Input->type_p);
      pop(&Input);
    } else if (Input->type_p >= cosinus && Input->type_p <= log_user) {
      push(&OperatorStack, Input->value, Input->priority, Input->type_p);
      pop(&Input);
    } else if (Input->type_p >= plus && Input->type_p < power) {
      while (OperatorStack != NULL && OperatorStack->type_p != bracket_open &&
             Input->priority <=
                 OperatorStack
                     ->priority)  // Input->priority <= OperatorStack->priority)
      {
        push(OutputQueue, OperatorStack->value, OperatorStack->priority,
             OperatorStack->type_p);
        pop(&OperatorStack);
      }
      push(&OperatorStack, Input->value, Input->priority, Input->type_p);
      pop(&Input);
    } else if (Input->type_p == power) {
      while (OperatorStack != NULL && OperatorStack->type_p != bracket_open &&
             Input->priority <
                 OperatorStack->priority)  // There was an error: nput->priority
                                           // > OperatorStack->priority)
      {
        push(OutputQueue, OperatorStack->value, OperatorStack->priority,
             OperatorStack->type_p);
        pop(&OperatorStack);
      }
      push(&OperatorStack, Input->value, Input->priority, Input->type_p);
      pop(&Input);
    } else if (Input->type_p == bracket_open) {
      push(&OperatorStack, Input->value, Input->priority, Input->type_p);
      pop(&Input);
    } else if (Input->type_p == bracket_close) {
      //Пока токен на вершине стека не открывающая скобка
      while (OperatorStack != NULL && OperatorStack->type_p != bracket_open) {
        //Переложить оператор из стека в выходную очередь
        push(OutputQueue, OperatorStack->value, OperatorStack->priority,
             OperatorStack->type_p);
        pop(&OperatorStack);
      }  // При этом открывающая скобка удаляется из стека, но в выходную строку
         // не добавляется.
      pop(&OperatorStack);

      if (OperatorStack != NULL && OperatorStack->type_p >= cosinus &&
          OperatorStack->type_p <= log_user) {  // functions
        push(OutputQueue, OperatorStack->value, OperatorStack->priority,
             OperatorStack->type_p);
        pop(&OperatorStack);
      }
      //выкинуть закрывающую скобку из входа
      pop(&Input);
    }
  }
  while (OperatorStack != NULL && (OperatorStack->type_p != bracket_open)) {
    push(OutputQueue, OperatorStack->value, OperatorStack->priority,
         OperatorStack->type_p);
    pop(&OperatorStack);
  }
  return result;
}

// void printStack(Nn *head) {
//     while (head!=NULL) {
//         printf("%f ", (head)->value);
//         printf("%d ", (head)->priority);
//         printf("%d\n", (head)->type);
//         head = (head)->next;
//     }

// }

/// \brief  reverses the order of entities from one stack,
/// \brief  which is a parsed string, into another
/// \return  returns nothing except the reversed parsed string
///
/**
 * @brief
 * @param Parsed_String
 * @param Rev_Parsed_String
 * @param
 */
void reverse(Nn **Parsed_String, Nn **Rev_Parsed_String) {
  while ((*Parsed_String) != NULL) {
    push(Rev_Parsed_String, (*Parsed_String)->value, (*Parsed_String)->priority,
         (*Parsed_String)->type_p);
    pop(Parsed_String);
  }
}

/// \brief  removes an entity from the stack top
///
/// \return  returns 1 if popping is a success and 0 if not
///
/**
 * @brief
 * @param head
 */

double pop(Nn **head) {
  int result = OK;
  if ((*head) == NULL) {
    result = FALSE;
  } else {
    Nn *out = NULL;
    out = *head;
    *head = (*head)->next;
    free(out);
  }
  return result;
}

/// \brief  calculates the string sorted by the polish notation algorithm
///
/// \return  a double value
///
/**
 * @brief
 * @param StackToSolve
 */

double calculate(Nn **StackToSolve) {
  Nn *temp = NULL;
  Nn *sort = NULL;
  reverse(StackToSolve, &temp);
  double Total_Result = 0.0;
  int i = 0;
  while (temp != NULL) {
    if (temp != NULL && temp->type_p == num) {
      push(&sort, temp->value, temp->priority, temp->type_p);
      pop(&temp);
      i++;
    } else if (temp != NULL && temp->type_p >= plus && temp->type_p <= power) {
      double sort_popped_value = sort->value;
      pop(&sort);
      Total_Result =
          apply_operator(temp->type_p, &sort->value, &sort_popped_value);
      pop(&sort);
      push(&sort, Total_Result, 0, 0);
      pop(&temp);
      if (temp == NULL) {
        break;
      }
      i++;
    } else if (temp != NULL && temp->type_p >= cosinus &&
               temp->type_p <= log_user) {
      double sort_popped_value = sort->value;
      pop(&sort);
      Total_Result = apply_function(temp->type_p, &sort_popped_value);
      push(&sort, Total_Result, 0, 0);
      pop(&temp);
      if (temp == NULL) {
        break;
      }
      i++;
    }
  }
  return Total_Result;
}

/// \brief  responsible for involving a math.h function according to the
/// corresponding type of an operator
///
/// \return  a double value
///
/**
 * @brief
 * @param function_type
 * @param  value_1
 */

double apply_function(int function_type, double *value_1) {
  double result = 0.0;
  if (function_type == cosinus) {
    result = cos(*value_1);
  } else if (function_type == sinus) {
    result = sin(*value_1);
  } else if (function_type == tangence) {
    result = tan(*value_1);
  } else if (function_type == acosinus) {
    result = acos(*value_1);
  } else if (function_type == asinus) {
    result = asin(*value_1);
  } else if (function_type == atangence) {
    result = atan(*value_1);
  } else if (function_type == sqrt_user) {
    result = sqrt(*value_1);
  } else if (function_type == ln_user) {
    result = log(*value_1);
  } else if (function_type == log_user) {
    result = log10(*value_1);
  }
  return result;
}

/// \brief  responsible for involving a math.h operator according to the
/// corresponding type of an operator
///
/// \return  a double value
///
/**
 * @brief
 * @param operator_type
 * @param  value_1
 * @param  value_2
 */

double apply_operator(int operator_type, double *value_1, double *value_2) {
  double result = 0.0;
  if (operator_type == plus) {
    result = (*value_1) + (*value_2);
  } else if (operator_type == minus) {
    result = (*value_1) - (*value_2);
  } else if (operator_type == mult) {
    result = (*value_1) * (*value_2);
  } else if (operator_type == divide) {
    result = (*value_1) / (*value_2);
  } else if (operator_type == mod_div) {
    result = fmod((*value_1), (*value_2));
  } else if (operator_type == power) {
    result = pow((*value_1), (*value_2));
  }
  return result;
}

/// \brief  check the incomding
///
/// \return  a double value
///
/**
 * @brief
 * @param operator_type
 * @param  value_1
 * @param  value_2
 */

/// \brief checks an incoming string char "str"
/// \return returns '1' if  the string is input correctly and '0'if not
///
/**
 * @brief
 * @param str
 */

int validated(char *str) {
  int len = strlen(str);
  int result = OK;
  int i = 0;
  for (i = 0; i < len && result == OK; i++) {  //
    // ищем два оператора подряд '+-
    if (!check_op_single(str)) {
      result = FALSE;
      break;
    }
    if (!brackets_norm(str)) {
      result = FALSE;
      break;
    }
    if (str[0] == ')' || str[len - 1] == '(') {
      result = FALSE;
      break;
    }
    // проверяем на вывернутые скобки ')('
    if (str[i] == ')' && str[i + 1] == '(') {
      result = FALSE;
      break;
    }
    // проверяем чтобы между цифрой и скобкой  был оператор
    if (number_1(&str[i]) && str[i + 1] == '(') {
      result = FALSE;
      break;
    }
    if (i > 0 && number_1(&str[i]) && str[i - 1] == ')') {
      result = FALSE;
      break;
    }
    // проверяем на пустые скобки '()'
    if (str[i] == '(' && str[i + 1] == ')') {
      result = FALSE;
      break;
    }
    // проверка есть ли между открывающей скобкой и цифрой  операторы * / mod //
    if (str[i] == '(' &&
        (str[i + 1] == '*' || str[i + 1] == '/' || str[i + 1] == 'm')) {
      result = FALSE;
      break;
    }
    if (str[i] == '(' && str[i + 1] == '.') {
      result = FALSE;
      break;
    }
    if (str[i] == '(' && str[i + 1] == ',') {
      result = FALSE;
      break;
    }

    // проверка на оператор (*) и (/) в начале или на любой оператор в конце
    // строки ()  )
    // if(strchr(&str[0], '*') || strchr(&str[0], '/') ||
    // operator_u(&str[len-1])){
    if (str[0] == '*' || str[0] == '/' || operator_u(&str[len - 1])) {
      result = FALSE;
      break;
    }

    if (str[0] == 'm') {
      result = FALSE;
      break;
    }
    if (str[i] == 'd' && !number_1(&str[i + 1]) &&
        str[i + 1] != '(') {  //'(' added in case 5mod(-2)
      result = FALSE;
      break;
    }

    if (str[i] == 'm') {
      if (i > 0 && (number_1(&str[i - 1])) && str[i] == 'm' &&
          (number_1(&str[i + 3]))) {
        result = OK;
      } else {  // также отрабатывает случай со скобкой функцией (mod33)
        result = FALSE;
      }
    }

    // перед и после mod должно быть число. I.e. не пустота (m == str[0]), не
    // оператор, не функция, не скобка '('
    if (str[i] == 'm') {
      if (i > 0 && (number_1(&str[i - 1])) && str[i] == 'm' &&
          (number_1(&str[i + 3]))) {
        result = OK;
      }
      if (i > 0 && (!number_1(&str[i - 1])) && str[i] == 'm' &&
          (!number_1(&str[i + 3]))) {
        result = FALSE;
      }
      if (i > 0 && (operator_u(&str[i - 1])) && str[i] == 'm') {
        result = FALSE;
      }
      if (str[i] == 'm' && !number_1(&str[i + 3])) {
        result = FALSE;
      } else {  // также отрабатывает случай со скобкой функцией (mod33)
        result = FALSE;
      }
    }
    int k = 0;  //точки
    while ((number_1(&str[i]) || str[i] == '.') || str[i] == ',') {
      if (str[i] == '.' || str[i] == ',') {
        k++;
      }
      i++;
    }
    if (k == 1 || k == 0)
      result = OK;
    else if (k > 1)
      result = FALSE;
  }
  return result;
}

/// \brief calcualtes an incoming string considering the x_number if any
/// \return returns the double result
///
/**
 * @brief
 * @param string
 * @param x_number
 */

double string_calc(char *string, double x_number) {
  Nn *A = NULL;
  polish_notation(string, &A, x_number);
  double result = calculate(&A);
  return result;
}

/// \brief calculates credit amount according to certain parameters
/// \return returns four values of float types
///
/**
 * @brief
 * @param  credit_amount
 * @param  credit_term
 * @param  credit_percentage_rate
 * @param  repay_type
 * @param  monthly_pay_first
 * @param  monthly_pay_last
 * @param  overpay
 * @param  total_repayment
 */

void credit_calc(float credit_amount, int credit_term,
                 float credit_percentage_rate, int repay_type,
                 float *monthly_pay_first, float *monthly_pay_last,
                 float *overpay, float *total_repayment) {
  float percent_per_month;
  float ostatok_dolga;
  // floats percent_P;
  *overpay = 0;
  *total_repayment = 0;
  float percent_P = credit_percentage_rate / 100 / 12;  // constant 0.01
  // ostatok_dolga = credit_amount;
  if (repay_type == ANNUITY) {
    // percent_P = credit_percentage_rate/100/12; //constant 0.01
    *monthly_pay_first =
        round(
            credit_amount *
            (percent_P + percent_P / (powf((1 + percent_P), credit_term) - 1)) *
            100) /
        100;
    ostatok_dolga = credit_amount;
    for (int i = 0; i < credit_term; i++) {
      percent_per_month = ostatok_dolga * percent_P;
      float debt_part = *monthly_pay_first - percent_per_month;
      float debt_by_month_end = ostatok_dolga - debt_part;
      ostatok_dolga = debt_by_month_end;
      *overpay = (*overpay + percent_per_month);
    }
    *total_repayment = (credit_amount + *overpay);
    *monthly_pay_last = (*monthly_pay_first);
  } else if (repay_type == DIFFERENTIAL) {
    // percent_P = credit_percentage_rate/100/12; //constant 0.01
    *monthly_pay_first =
        round(
            credit_amount *
            (percent_P + percent_P / (powf((1 + percent_P), credit_term) - 1)) *
            100) /
        100;
    ostatok_dolga = credit_amount;
    float debt_part = ostatok_dolga / credit_term;
    percent_per_month = ostatok_dolga * percent_P;
    *monthly_pay_first = debt_part + percent_per_month;
    for (int i = 0; i < credit_term; i++) {
      percent_per_month = ostatok_dolga * percent_P;
      *monthly_pay_last = debt_part + percent_per_month;
      float debt_by_month_end = ostatok_dolga - debt_part;
      ostatok_dolga = debt_by_month_end;
      *overpay = *overpay + percent_per_month;
      //    *monthly_pay_last = *monthly_pay_first;
    }
    *total_repayment = (credit_amount + *overpay);
    //    *monthly_pay_last = *monthly_pay_first;
  }
  // percent_per_month = ostatok_dolga*percent_P;
  ostatok_dolga = credit_amount;
}

// void deposit_calc_simple(double Deposit_amount, int Deposit_term, double
// Deposit_percent,
//     double Tax_rate,  double *AccruedInterests, double *TaxAmount, double
//     *DepositClosingAmount)  {
//         Tax_rate = TAX_RATE;
//         *AccruedInterests =
//         (Deposit_amount*Deposit_percent*(Deposit_term))/1200;
//         if(*AccruedInterests > (1000000*CENTRAL_BANK_RATE))
//             *TaxAmount =
//             (*AccruedInterests-(1000000*CENTRAL_BANK_RATE))*Tax_rate;
//         *DepositClosingAmount = Deposit_amount + *AccruedInterests;
//     }

/// \brief calculates deposit percent according to certain parameters
/// \return returns 3 values of double types
///
/**
 * @brief
 * @param  Deposit_amount
 * @param  Deposit_term
 * @param  Deposit_percent
 * @param  Tax_rate
 * @param  AccruedInterests
 * @param  TaxAmount
 * @param  DepositClosingAmount
 */

void deposit_calc_simple(double Deposit_amount, int Deposit_term,
                         double Deposit_percent, double Tax_rate,
                         double *AccruedInterests, double *TaxAmount,
                         double *DepositClosingAmount) {
  //        Tax_rate = TAX_RATE;
  *AccruedInterests =
      (Deposit_amount * Deposit_percent * (Deposit_term)) / 1200;
  // if(*AccruedInterests > (1000000*CENTRAL_BANK_RATE))
  // *TaxAmount = (*AccruedInterests-(1000000*CENTRAL_BANK_RATE))*Tax_rate;
  *TaxAmount = *AccruedInterests * (Tax_rate / 100);
  *DepositClosingAmount = Deposit_amount + *AccruedInterests;
}

/// \brief calculates deposit interests
/// \return returns 3 values of double types according to capitalization period
///
/**
 * @brief
 * @param  Deposit_amount
 * @param  Deposit_term
 * @param  Deposit_percent
 * @param  Tax_rate
 * @param  AccruedInterests
 * @param  capitalize
 * @param  TaxAmount
 * @param  DepositClosingAmount
 */
void deposit_calc(double Deposit_amount, int Deposit_term,
                  double Deposit_percent, double Tax_rate, int capitalize,
                  double *AccruedInterests, double *TaxAmount,
                  double *DepositClosingAmount) {
  //      if (capitalize == CapMonthly && periodicity == 0 && replenish == 0 &&
  //      withdraw == 0) {
  if (capitalize == CapMonthly) {
    *DepositClosingAmount =
        Deposit_amount *
        pow((1 + ((Deposit_percent / 100) / 12)), Deposit_term);
    // }
    *AccruedInterests = *DepositClosingAmount - Deposit_amount;
    *TaxAmount = *AccruedInterests * (Tax_rate / 100);
  } else if (capitalize == CapQuarterly) {
    //             } else if (capitalize == CapQuarterly && periodicity == 0 &&
    //             replenish == 0 && withdraw == 0) {
    *DepositClosingAmount =
        Deposit_amount *
        pow((1 + ((Deposit_percent / 100) / 4)), Deposit_term / 3);
    // }
    *AccruedInterests = *DepositClosingAmount - Deposit_amount;
    *TaxAmount = *AccruedInterests * (Tax_rate / 100);
  } else if (capitalize == CapHalfYear) {
    //    } else if (capitalize == CapHalfYear && periodicity == 0 && replenish
    //    == 0 && withdraw == 0) {
    *DepositClosingAmount =
        Deposit_amount *
        pow((1 + ((Deposit_percent / 100) / 2)), Deposit_term / 6.0);
    // }
    *AccruedInterests = *DepositClosingAmount - Deposit_amount;
    *TaxAmount = *AccruedInterests * (Tax_rate / 100);
  }
}
