#pragma once
#include "../business/GraphCalculator.h"
#include "../business/PrecisionSizeCalculator.h"
#include "../framework/StringConverter.h"
#include <cmath>


namespace CppCLRWinFormsProject {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	private: System::Windows::Forms::Panel^ inputPanel;
	private: System::Windows::Forms::Label^ chartVariationToLabel;

	private: System::Windows::Forms::Label^ chatVariationFromLabel;
	private: System::Windows::Forms::TextBox^ chartVariationToInput;


	private: System::Windows::Forms::TextBox^ chartVartiationFromInput;

	private: System::Windows::Forms::Label^ chartVariationIntervalLabel;
	private: System::Windows::Forms::TextBox^ chartVariationStepInput;


	private: System::Windows::Forms::Label^ chartVariationStepLabel;

	private: System::Windows::Forms::Button^ buildChart;
	private: System::Windows::Forms::PictureBox^ formulaImage;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->inputPanel = (gcnew System::Windows::Forms::Panel());
			this->formulaImage = (gcnew System::Windows::Forms::PictureBox());
			this->buildChart = (gcnew System::Windows::Forms::Button());
			this->chartVariationToLabel = (gcnew System::Windows::Forms::Label());
			this->chatVariationFromLabel = (gcnew System::Windows::Forms::Label());
			this->chartVariationToInput = (gcnew System::Windows::Forms::TextBox());
			this->chartVartiationFromInput = (gcnew System::Windows::Forms::TextBox());
			this->chartVariationIntervalLabel = (gcnew System::Windows::Forms::Label());
			this->chartVariationStepInput = (gcnew System::Windows::Forms::TextBox());
			this->chartVariationStepLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->inputPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->formulaImage))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			this->chart->Dock = System::Windows::Forms::DockStyle::Top;
			legend1->Name = L"Legend1";
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(0, 0);
			this->chart->Margin = System::Windows::Forms::Padding(3, 150, 3, 3);
			this->chart->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart->Series->Add(series1);
			this->chart->Size = System::Drawing::Size(1050, 691);
			this->chart->TabIndex = 2;
			this->chart->Text = L"chart1";
			// 
			// panel1
			// 
			this->inputPanel->Controls->Add(this->formulaImage);
			this->inputPanel->Controls->Add(this->buildChart);
			this->inputPanel->Controls->Add(this->chartVariationToLabel);
			this->inputPanel->Controls->Add(this->chatVariationFromLabel);
			this->inputPanel->Controls->Add(this->chartVariationToInput);
			this->inputPanel->Controls->Add(this->chartVartiationFromInput);
			this->inputPanel->Controls->Add(this->chartVariationIntervalLabel);
			this->inputPanel->Controls->Add(this->chartVariationStepInput);
			this->inputPanel->Controls->Add(this->chartVariationStepLabel);
			this->inputPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->inputPanel->Location = System::Drawing::Point(0, 697);
			this->inputPanel->MinimumSize = System::Drawing::Size(0, 160);
			this->inputPanel->Name = L"panel1";
			this->inputPanel->Size = System::Drawing::Size(1050, 160);
			this->inputPanel->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->formulaImage->ImageLocation = L"resources\\formula.jpg";
			this->formulaImage->Location = System::Drawing::Point(12, 10);
			this->formulaImage->Name = L"pictureBox1";
			this->formulaImage->Size = System::Drawing::Size(354, 140);
			this->formulaImage->TabIndex = 8;
			this->formulaImage->TabStop = false;
			// 
			// buildChart
			// 
			this->buildChart->Location = System::Drawing::Point(824, 10);
			this->buildChart->Name = L"buildChart";
			this->buildChart->Size = System::Drawing::Size(214, 54);
			this->buildChart->TabIndex = 7;
			this->buildChart->Text = L"Построить график";
			this->buildChart->UseVisualStyleBackColor = true;
			this->buildChart->Click += gcnew System::EventHandler(this, &MainForm::buildChart_Click);
			// 
			// chartVariationToLabel
			// 
			this->chartVariationToLabel->AutoSize = true;
			this->chartVariationToLabel->Location = System::Drawing::Point(558, 74);
			this->chartVariationToLabel->Name = L"chartVariationToLabel";
			this->chartVariationToLabel->Size = System::Drawing::Size(40, 25);
			this->chartVariationToLabel->TabIndex = 6;
			this->chartVariationToLabel->Text = L"До";
			// 
			// chatVariationFromLabel
			// 
			this->chatVariationFromLabel->AutoSize = true;
			this->chatVariationFromLabel->Location = System::Drawing::Point(559, 38);
			this->chatVariationFromLabel->Name = L"chatVariationFromLabel";
			this->chatVariationFromLabel->Size = System::Drawing::Size(39, 25);
			this->chatVariationFromLabel->TabIndex = 5;
			this->chatVariationFromLabel->Text = L"От";
			// 
			// chartVariationToInput
			// 
			this->chartVariationToInput->Location = System::Drawing::Point(629, 71);
			this->chartVariationToInput->Name = L"chartVariationToInput";
			this->chartVariationToInput->Size = System::Drawing::Size(100, 29);
			this->chartVariationToInput->TabIndex = 4;
			// 
			// chartVartiationFromInput
			// 
			this->chartVartiationFromInput->Location = System::Drawing::Point(629, 35);
			this->chartVartiationFromInput->Name = L"chartVartiationFromInput";
			this->chartVartiationFromInput->Size = System::Drawing::Size(100, 29);
			this->chartVartiationFromInput->TabIndex = 3;
			// 
			// chartVariationIntervalLabel
			// 
			this->chartVariationIntervalLabel->AutoSize = true;
			this->chartVariationIntervalLabel->Location = System::Drawing::Point(559, 10);
			this->chartVariationIntervalLabel->Name = L"chartVariationIntervalLabel";
			this->chartVariationIntervalLabel->Size = System::Drawing::Size(250, 25);
			this->chartVariationIntervalLabel->TabIndex = 2;
			this->chartVariationIntervalLabel->Text = L"Интервал варьирования x";
			// 
			// chartVariationStepInput
			// 
			this->chartVariationStepInput->Location = System::Drawing::Point(380, 38);
			this->chartVariationStepInput->Name = L"chartVariationStepInput";
			this->chartVariationStepInput->Size = System::Drawing::Size(100, 29);
			this->chartVariationStepInput->TabIndex = 1;
			// 
			// chartVariationStepLabel
			// 
			this->chartVariationStepLabel->AutoSize = true;
			this->chartVariationStepLabel->Location = System::Drawing::Point(375, 10);
			this->chartVariationStepLabel->Name = L"chartVariationStepLabel";
			this->chartVariationStepLabel->Size = System::Drawing::Size(178, 25);
			this->chartVariationStepLabel->TabIndex = 0;
			this->chartVariationStepLabel->Text = L"Шаг варьирования";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1050, 857);
			this->Controls->Add(this->inputPanel);
			this->Controls->Add(this->chart);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->inputPanel->ResumeLayout(false);
			this->inputPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->formulaImage))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buildChart_Click(System::Object^ sender, System::EventArgs^ e) {
		StringConverterHelper stringConverter = StringConverterHelper();
		std::string variationInput = stringConverter.convertString(this->chartVariationStepInput->Text);
		std::string variationStartsFrom = stringConverter.convertString(this->chartVartiationFromInput->Text);
		std::string variationStartsTo = stringConverter.convertString(this->chartVariationToInput->Text);

		GraphCalculator graphCalculator = GraphCalculator();
		PrecisionSizeCalculator precisionSizeCalculator = PrecisionSizeCalculator();

		graphCalculator.minValue = std::stof(variationStartsFrom);
		graphCalculator.maxValue = std::stof(variationStartsTo);
		graphCalculator.step = std::stof(variationInput);
		graphCalculator.precision = precisionSizeCalculator.calculate(variationInput);

		this->chart->Series->Clear();
		this->chart->Series->Add("y");
		this->chart->Series["y"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;

		for (GraphPoint point : graphCalculator.calculatePoints()) {
			this->chart->Series["y"]->Points->AddXY(std::round(point.x * 100) / 100, std::round(point.y * 100) / 100);
		}
	}
};
}