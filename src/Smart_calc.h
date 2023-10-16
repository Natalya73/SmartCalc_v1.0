/// \file
#ifndef SRC_START_CALC_H_
#define SRC_START_CALC_H_

#include <ctype.h>
#include <errno.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ANNUITY 1
#define DIFFERENTIAL 2
#define STACK_OVERFLOW 256
#define OK 1
#define FALSE 0

enum type_p {
  num = 0,      // number
  plus = 1,     // +
  minus = 2,    // -
  mult = 3,     // *
  divide = 4,   // '/'
  mod_div = 5,  //
  power = 6,
  bracket_open = 7,   // '('  0
  bracket_close = 8,  // ')'  0
  cosinus = 9,
  sinus = 10,
  tangence = 11,
  acosinus = 12,
  asinus = 13,
  atangence = 14,
  sqrt_user = 15,
  ln_user = 16,
  log_user = 17,
  dot = 18,
  comma = 19,
  iks = 20
};

typedef struct N {
  double value;
  int priority;
  int type_p;
  struct N *next;
} Nn;

// x1234567890+-*/mod^()cossintanacosasinatansqrtlnlogdotcomma,.

double apply_function(int function_type, double *value_1);
double apply_operator(int operator_type, double *value_1, double *value_2);
// void printStack(Nn *head);
void reverse(Nn **Parsed_String, Nn **Rev_Parsed_String);
// Nn* pop(Nn **head);
double pop(Nn **head);
// double peek(Nn *head);
void push(Nn **head, double value, int priority, int type_p);
// void parse(char *str, Nn **A);
void parse(char *str, Nn **A, double x_number);
int operator_u(char *str);
int number_1(char *str);
int brackets_norm(char *str);
int check_op_single(char *str);
int validated(char *str);
// void StackInit(Nn *p);

// int priority(Nn *head);
// int stack_token_type(Nn *head);

// int StackEmpty(Nn *head);
// void polish_notation(char *string, Nn **OutputQueue);
int polish_notation(char *string, Nn **OutputQueue, double x_number);
double calculate(Nn **StackToSolve);
double string_calc(char *string, double x_number);

//  BONUS PART

#define LEAP 1
#define REGULAR 2
#define CENTRAL_BANK_RATE 0.075
#define TAX_RATE 0.13

enum type_param {
  CapMonthly = 1,
  CapQuarterly = 2,
  CapHalfYear = 3,
  CapYear = 4,
  CapEndOfTerm = 5,
  PayFrMonth = 6,
  PayFrQuarter = 7,
  PayFrHalfYear = 8,
  PayFrEndOfTerm = 9,
  ReplMonth = 10,
  ReplQuarter = 11,
  ReplHalfYear = 12,
  ReplYear = 13,
  WithdrawMonth = 14,
  WithdrawQuarter = 15,
  WithdrawHalfYear = 17,
  WithdrawYear = 18
};

//    enum type_deposit {
//        Monthly = 1,
//        Quarterly = 2,
//        HalfYear = 3,
//        EndOfTerm = 4
//    };

// void credit_calc(float credit_amount);
void credit_calc(float credit_amount, int credit_term,
                 float credit_percentage_rate, int repay_type,
                 float *monthly_pay_first, float *monthly_pay_last,
                 float *overpay, float *total_repayment);
void deposit_calc_simple(double Deposit_amount, int Deposit_term,
                         double Deposit_percent, double Tax_rate,
                         double *AccruedInterests, double *TaxAmount,
                         double *DepositClosingAmount);
// void deposit_calc(double Deposit_amount, int Deposit_term, double
// Deposit_percent,
//     double Tax_rate, int periodicity, int capitalize, double replenish,
//     double withdraw, double *AccruedInterests, double *TaxAmount, double
//     *DepositClosingAmount);

void deposit_calc(double Deposit_amount, int Deposit_term,
                  double Deposit_percent, double Tax_rate, int capitalize,
                  double *AccruedInterests, double *TaxAmount,
                  double *DepositClosingAmount);

#endif  // SRC_START_CALC_H_
