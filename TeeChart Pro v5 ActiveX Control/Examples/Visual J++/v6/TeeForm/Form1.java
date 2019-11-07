import com.ms.wfc.app.*;
import com.ms.wfc.core.*;
import com.ms.wfc.ui.*;
import com.ms.wfc.html.*;


/**
 * This class can take a variable number of parameters on the command
 * line. Program execution begins with the main() method. The class
 * constructor is not invoked unless an object of type 'Form1' is
 * created in the main() method.
 */
public class Form1 extends Form
{
	public Form1()
	{
		// Required for Visual J++ Form Designer support
		initForm();		

		// TODO: Add any constructor code after initForm call
	}

	/**
	 * Form1 overrides dispose so it can clean up the
	 * component list.
	 */
	public void dispose()
	{
		super.dispose();
		components.dispose();
	}

	private void button1_click(Object source, Event e)
	{
		com.ms.com.Variant InputSeries = new com.ms.com.Variant();
	
	    //Associate TeeChart components
		teeCommander1.setChartLink(TChart1.getChartLink());
		teeEditor1.setChartLink(TChart1.getChartLink());
		teePreviewer1.setChartLink(TChart1.getChartLink());
		
		//Set Editor and Previewer defaults
		teeEditor1.getOptions().setAdd(false);
		teeEditor1.getOptions().setClone(false);
		teeEditor1.getOptions().setDelete(false);
		teePreviewer1.setPaperColor(65535);

		//Associate the Previewer and Editor called from 
		//TeeCommander with teeEditor1 and teePreviewer1
		//settings
		teeCommander1.setEditorLink(teeEditor1.getEditorLink());
		teeCommander1.setPreviewerLink(teePreviewer1.getPreviewerLink());
		
		//Load Chart Series
		TChart1.AddSeries(1);
		TChart1.getSeries(0).FillSampleValues(15);
		
		//Add a Series for function
		TChart1.AddSeries(0);
		//Set a function for the Series (StdDeviation)
		TChart1.getSeries(1).SetFunction(14);
		//Add Series(0) as Datasource
		InputSeries.putDispatch(TChart1.getSeries(0));
		//********************************************
		// Or could use text, eg:
		// InputSeries.putString("Series0");
		//********************************************
		TChart1.getSeries(1).setDataSource(InputSeries);
		//Change the Function Period to 3
		TChart1.getSeries(1).getFunctionType().setPeriod(3);
		//Add a Title for the Series
		TChart1.getSeries(1).setTitle("3 Point Std Deviation");
		
		//Set Marks 'On' for the Average and 'Off' on the Bar Series
		TChart1.getSeries(1).getMarks().setVisible(true);
		TChart1.getSeries(0).getMarks().setVisible(false);

		
		//Setup TeeListBox1
		teeListBox1.setChartLink(TChart1.getChartLink());
		teeListBox1.UpdateSeries();
		
	}

	private void button2_click(Object source, Event e)
	{
		if (TChart1.getSeriesCount() > 1) {
			if (TChart1.getAxis().getCustomCount() < 1) {	
			  int newaxis = TChart1.getAxis().AddCustom(false);
			  TChart1.getSeries(1).setVerticalAxisCustom(newaxis);

			  TChart1.getAxis().getLeft().setStartPosition(50);
			  TChart1.getAxis().getCustom(0).setStartPosition(0);
			  TChart1.getAxis().getCustom(0).setEndPosition(50);
			  TChart1.getAxis().getCustom(0).getTitle().setCaption("StdDev. values");
			  TChart1.getAxis().getCustom(0).getTitle().getFont().setBold(true);
			  TChart1.getAxis().getCustom(0).setPositionPercent(50);
			  TChart1.getAxis().getLeft().getTitle().setCaption("Input values");
			}
		}
	}


	/**
	 * NOTE: The following code is required by the Visual J++ form
	 * designer.  It can be modified using the form editor.  Do not
	 * modify it using the code editor.
	 */
	Container components = new Container();
	teechart5.TChart.TChart TChart1 = new teechart5.TChart.TChart();
	teechart5.TeeCommander.TeeCommander teeCommander1 = new teechart5.TeeCommander.TeeCommander();
	teechart5.TeeListBox.TeeListBox teeListBox1 = new teechart5.TeeListBox.TeeListBox();
	Button button1 = new Button();
	teechart5.TeeEditor.TeeEditor teeEditor1 = new teechart5.TeeEditor.TeeEditor();
	teechart5.TeePreviewer.TeePreviewer teePreviewer1 = new teechart5.TeePreviewer.TeePreviewer();
	Button button2 = new Button();

	private void initForm()
	{
		// NOTA: este formulario almacena información en un 
		// archivo externo. No modifique el parámetro de cadena para ninguna
		// llamada a la función resources.getObject(). Por ejemplo, no 
		// modifique "ubicacion_abc1" en la siguiente línea de código 
		// aunque sí cambie el nombre del objeto Abc: 
		//	 abc1.setLocation((Point)resources.getObject("ubicacion_abc"));

		IResourceManager resources = new ResourceManager(this, "Form1");
		this.setText("Form1");
		this.setAutoScaleBaseSize(new Point(5, 13));
		this.setClientSize(new Point(530, 323));

		components.add(TChart1, "TChart1");
		TChart1.setAnchor(ControlAnchor.BOTTOMLEFT);
		TChart1.setLocation(new Point(0, 64));
		TChart1.setSize(new Point(344, 256));
		TChart1.setTabIndex(0);
		TChart1.setOcxState((AxHost.State)resources.getObject("TChart1_ocxState"));

		components.add(teeCommander1, "teeCommander1");
		teeCommander1.setAnchor(ControlAnchor.TOPLEFTRIGHT);
		teeCommander1.setLocation(new Point(0, 32));
		teeCommander1.setSize(new Point(530, 32));
		teeCommander1.setTabIndex(1);
		teeCommander1.setOcxState((AxHost.State)resources.getObject("teeCommander1_ocxState"));

		components.add(teeListBox1, "teeListBox1");
		teeListBox1.setAnchor(ControlAnchor.RIGHT);
		teeListBox1.setLocation(new Point(345, 64));
		teeListBox1.setSize(new Point(184, 256));
		teeListBox1.setTabIndex(2);
		teeListBox1.setOcxState((AxHost.State)resources.getObject("teeListBox1_ocxState"));

		components.add(button1, "button1");
		button1.setLocation(new Point(1, 5));
		button1.setSize(new Point(120, 24));
		button1.setTabIndex(3);
		button1.setText("Fill Chart");
		button1.addOnClick(new EventHandler(this.button1_click));

		components.add(teeEditor1, "teeEditor1");
		teeEditor1.setLocation(new Point(440, 8));
		teeEditor1.setSize(new Point(24, 16));
		teeEditor1.setTabIndex(4);
		teeEditor1.setOcxState((AxHost.State)resources.getObject("teeEditor1_ocxState"));

		components.add(teePreviewer1, "teePreviewer1");
		teePreviewer1.setLocation(new Point(392, 8));
		teePreviewer1.setSize(new Point(24, 16));
		teePreviewer1.setTabIndex(5);
		teePreviewer1.setOcxState((AxHost.State)resources.getObject("teePreviewer1_ocxState"));

		components.add(button2, "button2");
		button2.setLocation(new Point(128, 5));
		button2.setSize(new Point(112, 24));
		button2.setTabIndex(6);
		button2.setText("Add Custom Axes");
		button2.addOnClick(new EventHandler(this.button2_click));

		this.setNewControls(new Control[] {
							button2, 
							teePreviewer1, 
							teeEditor1, 
							button1, 
							teeListBox1, 
							teeCommander1, 
							TChart1});

		TChart1.begin();
		teeCommander1.begin();
		teeListBox1.begin();
		teeEditor1.begin();
		teePreviewer1.begin();
	}

	/**
	 * The main entry point for the application. 
	 *
	 * @param args Array of parameters passed to the application
	 * via the command line.
	 */
	public static void main(String args[])
	{
		Application.run(new Form1());
	}
}
