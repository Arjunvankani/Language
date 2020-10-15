package com.example.arjunvankani.calculator;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class First extends AppCompatActivity {

    EditText et1,et2;
    Button b;
    TextView ans;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_first);

        et1 = (EditText)findViewById(R.id.et1);
        et2 = (EditText)findViewById(R.id.et2);
        b = (Button)findViewById(R.id.btnAdd);
        ans =(TextView) findViewById(R.id.tvAns);


    }
    public void add(view v)
    {
        int i=Integer.parseInt(et1.getText().toString());
        int j=Integer.parseInt(et2.getText().toString());

        int k = i +j;

        ans.setText("Ans is  : "+k);
    }
}
