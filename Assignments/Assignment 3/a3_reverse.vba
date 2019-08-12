   Public Sub Main()

      Randomize

      Dim raptor_prompt_variable_zzyz As String
      Dim reverse
      Dim digit
      Dim number

      raptor_prompt_variable_zzyz = "Enter a number: "
      number = InputBox(raptor_prompt_variable_zzyz)
      If number <= 0 Then
         MsgBox "Invalid Input"
      Else
         If number < 10 Then
            MsgBox "No need to reverse the numbers!"
         Else
            digit = 0
            reverse = 0
            Do
               reverse = reverse * 10
               digit = number Mod 10
               reverse = reverse + digit
               number = floor(number / 10)
            Loop While number > 0
            MsgBox "The reverse is: " + reverse
         End If
      End If
      MsgBox "Thank you for using the software!"
   
End Sub

