package stemarie.com.intent;

import android.content.Intent;
import android.support.v7.app.ActionBarActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;


public class MainActivity extends ActionBarActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.splashscreen);

        Button btnToPoubelle = (Button) findViewById(R.id.button);


        btnToPoubelle.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                //Toast.makeText(MainActivity.this, "Le bouton est cliqué", Toast.LENGTH_SHORT).show();
                Intent intent = new Intent(MainActivity.this, Param.class);
                startActivity(intent);
            }
        });


    }


}
