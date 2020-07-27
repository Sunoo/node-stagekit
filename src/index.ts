import bindings from 'bindings';

const api = bindings('stagekit-api.node');

export enum StrobeSpeed {
  Off = 0,
  Slow = 1,
  Medium = 2,
  Fast = 3,
  Fastest = 4
}

export class StageKit {
  readonly eventfile: string;

  constructor() {
    this.eventfile = api.Open();
  }

  Close(): void {
    api.Close();
  }

  AllOff(): void {
    api.AllOff();
  }

  SetStrobe(speed: StrobeSpeed): void {
    api.SetStrobe(speed as number);
  }

  SetFog(fog: boolean): void {
    api.SetFog(fog);
  }

  SetRed(red: number): void {
    api.SetRed(red);
  }

  SetYellow(yellow: number): void {
    api.SetYellow(yellow);
  }

  SetGreen(green: number): void {
    api.SetGreen(green);
  }

  SetBlue(blue: number): void {
    api.SetBlue(blue);
  }
}